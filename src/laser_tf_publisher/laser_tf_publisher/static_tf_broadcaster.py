#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rclpy
from rclpy.node import Node
from tf2_ros import StaticTransformBroadcaster
from geometry_msgs.msg import TransformStamped

class StaticLaserTfBroadcaster(Node):
   
    def __init__(self):
        super().__init__('static_laser_tf_broadcaster')

        
        self.tf_broadcaster = StaticTransformBroadcaster(self)

       
        transform_stamped = TransformStamped()

      
        transform_stamped.header.stamp = self.get_clock().now().to_msg()
        transform_stamped.header.frame_id = 'base_footprint'  
        transform_stamped.child_frame_id = 'laser'            

        
        transform_stamped.transform.translation.x = 0.13
        transform_stamped.transform.translation.y = 0.0
        transform_stamped.transform.translation.z = 0.245

        
        transform_stamped.transform.rotation.x = 0.0
        transform_stamped.transform.rotation.y = 0.0
        transform_stamped.transform.rotation.z = 0.0
        transform_stamped.transform.rotation.w = 1.0

        
        self.tf_broadcaster.sendTransform(transform_stamped)
        self.get_logger().info('success:base_footprint -> laser')

def main(args=None):
    rclpy.init(args=args)
    node = StaticLaserTfBroadcaster()
    
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()