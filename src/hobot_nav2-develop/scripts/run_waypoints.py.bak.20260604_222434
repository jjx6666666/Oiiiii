#!/usr/bin/env python3
"""
航点回放工具 — 读取 waypoints.json 并发起 /follow_waypoints 导航

用法:
  python3 run_waypoints.py                          # 默认读取 waypoints.json
  python3 run_waypoints.py my_route.json            # 指定航点文件
  python3 run_waypoints.py --repeat 3               # 循环 3 轮
  python3 run_waypoints.py waypoints.json --once    # 只跑一轮（默认）
"""

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from nav2_msgs.action import FollowWaypoints, NavigateToPose
from geometry_msgs.msg import PoseStamped
import json
import sys
import os
import time as time_module


class WaypointRunner(Node):
    def __init__(self, filename, repeat=1):
        super().__init__('waypoint_runner')

        # 加载航点文件
        self.waypoints = self._load_waypoints(filename)
        if not self.waypoints:
            self.get_logger().error(f'无法加载航点文件: {filename}')
            sys.exit(1)

        self.repeat = repeat
        self.current_round = 0
        self.current_idx = 0
        self.total = len(self.waypoints)
        self.failed_waypoints = []
        self.rejected_goals = 0

        # action clients
        self.fw_client = ActionClient(self, FollowWaypoints, '/follow_waypoints')
        # nt_client = ActionClient(self, NavigateToPose, '/navigate_to_pose')  # 备用单点接口

        self._wait_for_actions()
        self._print_summary()

    def _load_waypoints(self, filename):
        if not os.path.exists(filename):
            self.get_logger().error(f'文件不存在: {filename}')
            return None
        try:
            with open(filename, 'r') as f:
                data = json.load(f)
            wps = data.get('waypoints', data)
            if isinstance(wps, list):
                return wps
            return None
        except json.JSONDecodeError as e:
            self.get_logger().error(f'JSON 解析失败: {e}')
            return None

    def _wait_for_actions(self):
        self.get_logger().info('等待 /follow_waypoints action server...')
        if not self.fw_client.wait_for_server(timeout_sec=30.0):
            self.get_logger().error('/follow_waypoints 不可用！确保 Nav2 已启动并已设置初始位姿')
            sys.exit(1)
        self.get_logger().info('✅ Action server 就绪')

    def _print_summary(self):
        print()
        print('=' * 50)
        print(f'  航点回放工具')
        print(f'  航点总数: {self.total}')
        print(f'  循环次数: {self.repeat}')
        print(f'  总执行次数: {self.total * self.repeat}')
        print()
        for i, wp in enumerate(self.waypoints):
            yaw_str = f"yaw={wp['yaw']:.2f}" if 'yaw' in wp else ''
            print(f'    #{i+1}: x={wp["x"]:.3f}, y={wp["y"]:.3f}  {yaw_str}')
        print('=' * 50)
        print()

    def _pose_to_msg(self, wp):
        msg = PoseStamped()
        msg.header.frame_id = 'map'
        msg.pose.position.x = wp['x']
        msg.pose.position.y = wp['y']
        msg.pose.position.z = wp.get('z', 0.0)
        msg.pose.orientation.x = wp.get('qx', 0.0)
        msg.pose.orientation.y = wp.get('qy', 0.0)
        msg.pose.orientation.z = wp.get('qz', 0.0)
        msg.pose.orientation.w = wp.get('qw', 1.0)
        return msg

    def run(self):
        if self.total == 0:
            return False

        for round_idx in range(self.repeat):
            self.current_round = round_idx + 1
            if self.repeat > 1:
                self.get_logger().info(f'--- 第 {self.current_round}/{self.repeat} 轮 ---')

            # 构建 FollowWaypoints goal
            goal_msg = FollowWaypoints.Goal()
            goal_msg.poses = [self._pose_to_msg(wp) for wp in self.waypoints]

            # 发送
            self.get_logger().info(f'发送 {self.total} 个航点...')
            send_goal_future = self.fw_client.send_goal_async(goal_msg, feedback_callback=self.feedback_cb)
            rclpy.spin_until_future_complete(self, send_goal_future)

            goal_handle = send_goal_future.result()
            if goal_handle is None:
                self.rejected_goals += 1
                self.get_logger().error('❌ Goal 发送失败：没有收到 action 响应')
                continue
            if not goal_handle.accepted:
                self.rejected_goals += 1
                self.get_logger().error('❌ Goal 被拒绝：Nav2 可能未 active、未设置初始位姿，或代价地图/TF 未就绪')
                continue

            self.get_logger().info('✅ Goal 已接受，等待执行...')
            result_future = goal_handle.get_result_async()
            rclpy.spin_until_future_complete(self, result_future)

            result = result_future.result().result
            if result.missed_waypoints:
                self.get_logger().warning(f'⚠️  {len(result.missed_waypoints)} 个航点未到达: {result.missed_waypoints}')
                for idx in result.missed_waypoints:
                    self.failed_waypoints.append((round_idx, idx, self.waypoints[idx]))
            else:
                self.get_logger().info('✅ 全部航点执行成功！')

            if round_idx < self.repeat - 1:
                time_module.sleep(2)  # 轮间短暂暂停

        # 最终报告
        print()
        print('=' * 50)
        print('  执行完毕')
        ok = self.rejected_goals == 0 and not self.failed_waypoints
        if ok:
            print('  所有航点 ✅ 成功')
        else:
            if self.rejected_goals:
                print(f'  ❌ {self.rejected_goals} 次 goal 被拒绝/发送失败')
            if self.failed_waypoints:
                print(f'  ⚠️  {len(self.failed_waypoints)} 个航点未到达:')
                for r, i, wp in self.failed_waypoints:
                    print(f'    第{r+1}轮 #{i+1}: x={wp["x"]:.3f}, y={wp["y"]:.3f}')
        print('=' * 50)
        return ok

    def feedback_cb(self, feedback_msg):
        fb = feedback_msg.feedback
        print(f'\r  当前航点: {fb.current_waypoint + 1}/{self.total}', end='', flush=True)


def main():
    # 解析参数
    args = sys.argv[1:]
    filename = 'waypoints.json'
    repeat = 1

    i = 0
    while i < len(args):
        if args[i] == '--repeat' and i + 1 < len(args):
            repeat = int(args[i + 1])
            i += 2
        elif args[i] == '--once':
            repeat = 1
            i += 1
        elif args[i].endswith('.json'):
            filename = args[i]
            i += 1
        else:
            i += 1

    rclpy.init()
    runner = WaypointRunner(filename, repeat)
    ok = runner.run()
    runner.destroy_node()
    rclpy.shutdown()
    sys.exit(0 if ok else 2)


if __name__ == '__main__':
    main()
