#!/usr/bin/env python3

import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from ackermann_msgs.msg import AckermannDriveStamped
from rclpy.qos import QoSProfile

class CmdVel2AckermannDriveNode(Node):
    def __init__(self):
        super().__init__('cmd_vel_to_ackermann_drive')
        self.publisher = self.create_publisher(AckermannDriveStamped, '/ackermann_cmd', QoSProfile(depth=10))
        self.subscription = self.create_subscription(Twist, 'cmd_vel', self.cmd_callback, QoSProfile(depth=10))
        self.wheelbase = 0.16  # front/rear axle distance, meters
        self.min_turning_speed = 0.08
        self.steering_gain = 1.0
        self.max_steering_angle = 0.5   # ↑ 0.35 (旧)：原值会让 ω 大时被夹紧、视觉上看像原地转；新值给最小圆 0.28m
        self.frame_id = 'odom_combined'
        self.cmd_angle_instead_rotvel = False

    def convert_trans_rot_vel_to_steering_angle(self, vel, omega):
        if omega == 0 or vel == 0:
            return 0
        radius = vel / omega
        return math.atan(self.wheelbase / radius)

    def cmd_callback(self, data):
        vel = data.linear.x
        if abs(vel) < self.min_turning_speed and abs(data.angular.z) > 0.05:
            vel = -self.min_turning_speed if vel < 0.0 else self.min_turning_speed
        if self.cmd_angle_instead_rotvel:
            steering = data.angular.z
        else:
            steering = self.steering_gain * self.convert_trans_rot_vel_to_steering_angle(vel, data.angular.z)
        steering = max(min(steering, self.max_steering_angle), -self.max_steering_angle)

        msg = AckermannDriveStamped()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = self.frame_id
        msg.drive.steering_angle = steering
        msg.drive.speed = vel
        self.publisher.publish(msg)

def main():
    rclpy.init()
    node = CmdVel2AckermannDriveNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
