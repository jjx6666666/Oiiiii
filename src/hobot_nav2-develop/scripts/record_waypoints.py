#!/usr/bin/env python3
"""
航点记录工具
用法:
  终端1: ros2 run teleop_twist_keyboard teleop_twist_keyboard
  终端2: python3 record_waypoints.py

操作:
  s - 保存当前位置为航点
  q - 退出并生成航点文件 (waypoints.json)
  p - 打印当前已记录的所有航点
"""

import rclpy
from rclpy.node import Node
import tf2_ros
from tf2_ros import LookupException, ExtrapolationException, ConnectivityException
from geometry_msgs.msg import PoseStamped
import json
import math
import os
import sys
import threading

class WaypointRecorder(Node):
    def __init__(self):
        super().__init__('waypoint_recorder')
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        self.waypoints = []
        self.latest_pose = None
        self.tf_ready = False
        
        # 等待 TF 可用
        self.create_timer(0.5, self.check_tf)
        self.display_timer = self.create_timer(2.0, self.display_status)
        
        print("=" * 50)
        print("  航点记录工具 v1.0")
        print("=" * 50)
        print("  等待 TF 树就绪 (map -> base_footprint)...")
        print()

    def check_tf(self):
        try:
            self.tf_buffer.lookup_transform('map', 'base_footprint', rclpy.time.Time())
            if not self.tf_ready:
                self.tf_ready = True
                print("  ✅ TF 就绪! 可以开始记录航点")
                print()
                print("  操作说明:")
                print("    s - 保存当前位置为航点")
                print("    p - 打印所有航点")
                print("    q - 退出并保存航点文件")
                print()
        except (LookupException, ExtrapolationException, ConnectivityException):
            pass

    def sample_pose(self):
        """获取当前 map 坐标系下的机器人位姿"""
        try:
            trans = self.tf_buffer.lookup_transform('map', 'base_footprint', rclpy.time.Time())
            
            # 计算偏航角
            q = trans.transform.rotation
            siny_cosp = 2.0 * (q.w * q.z + q.x * q.y)
            cosy_cosp = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)
            yaw = math.atan2(siny_cosp, cosy_cosp)
            
            return {
                'x': round(trans.transform.translation.x, 3),
                'y': round(trans.transform.translation.y, 3),
                'z': round(trans.transform.translation.z, 3),
                'qx': round(q.x, 6),
                'qy': round(q.y, 6),
                'qz': round(q.z, 6),
                'qw': round(q.w, 6),
                'yaw': round(yaw, 3)
            }
        except (LookupException, ExtrapolationException, ConnectivityException):
            return None

    def save_waypoint(self):
        pose = self.sample_pose()
        if pose is None:
            print("\n  ⚠️  TF 不可用，无法记录航点")
            return
        self.waypoints.append(pose)
        print(f"\n  ✅ 已保存航点 #{len(self.waypoints)}: "
              f"x={pose['x']:.3f}, y={pose['y']:.3f}, yaw={pose['yaw']:.3f}")

    def print_waypoints(self):
        if not self.waypoints:
            print("\n  ❌ 还没有记录任何航点")
            return
        print(f"\n  📍 已记录 {len(self.waypoints)} 个航点:")
        for i, wp in enumerate(self.waypoints):
            print(f"     #{i+1}: x={wp['x']:.3f}, y={wp['y']:.3f}, yaw={wp['yaw']:.3f}")

    def save_to_file(self, filename='waypoints.json'):
        if not self.waypoints:
            print("\n  ❌ 没有航点可保存")
            return False
        
        data = {
            'waypoints': self.waypoints,
            'count': len(self.waypoints),
            'frame_id': 'map',
            'description': '航点文件, 用于 follow_waypoints action'
        }
        
        with open(filename, 'w') as f:
            json.dump(data, f, indent=2)
        
        abs_path = os.path.abspath(filename)
        print(f"\n  ✅ 已保存 {len(self.waypoints)} 个航点到: {abs_path}")
        return True

    def make_pose_stamped(self, wp):
        """将航点字典转为 PoseStamped"""
        msg = PoseStamped()
        msg.header.frame_id = 'map'
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.pose.position.x = wp['x']
        msg.pose.position.y = wp['y']
        msg.pose.position.z = wp['z']
        msg.pose.orientation.x = wp['qx']
        msg.pose.orientation.y = wp['qy']
        msg.pose.orientation.z = wp['qz']
        msg.pose.orientation.w = wp['qw']
        return msg

    def display_status(self):
        if self.tf_ready:
            pose = self.sample_pose()
            if pose:
                print(f"\r  📍 当前位置: x={pose['x']:.3f}, y={pose['y']:.3f}, "
                      f"yaw={pose['yaw']:.2f}  |  "
                      f"已记录: {len(self.waypoints)} 个航点", end='', flush=True)


def keyboard_listener(node):
    """键盘监听线程"""
    import tty
    import termios
    import select
    
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    
    try:
        tty.setraw(sys.stdin.fileno())
        while rclpy.ok():
            if select.select([sys.stdin], [], [], 0.1)[0]:
                key = sys.stdin.read(1)
                if key == 's' or key == 'S':
                    node.save_waypoint()
                elif key == 'p' or key == 'P':
                    node.print_waypoints()
                elif key == 'q' or key == 'Q':
                    print("\n\n  正在退出...")
                    node.save_to_file()
                    print("  👋 再见!")
                    rclpy.shutdown()
                    break
    finally:
        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)


def main():
    rclpy.init()
    node = WaypointRecorder()
    
    # 启动键盘监听线程
    kb_thread = threading.Thread(target=keyboard_listener, args=(node,), daemon=True)
    kb_thread.start()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("\n\n  正在退出...")
        node.save_to_file()
        print("  👋 再见!")
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
