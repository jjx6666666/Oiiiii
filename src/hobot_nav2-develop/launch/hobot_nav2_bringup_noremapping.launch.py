# Copyright (c) 2022，Horizon Robotics.
#
# Licensed under the Apache License, Version 2.0 (the "License");

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, SetLaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node, ComposableNodeContainer
from launch_ros.descriptions import ComposableNode

def generate_launch_description():
    originbot_navigation_dir = get_package_share_directory('hobot_nav2')
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    map_yaml_path = LaunchConfiguration('map',
        default=os.path.join(originbot_navigation_dir,'maps','final_6.yaml'))   # 跟 final_6.pgm 同名；指向 final_6.pgm（row_6.yaml 的副本）
    nav2_param_path = LaunchConfiguration('params_file',
        default=os.path.join(originbot_navigation_dir,'param','hobot_nav2.yaml'))

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value=use_sim_time),
        DeclareLaunchArgument('map', default_value=map_yaml_path),
        DeclareLaunchArgument('params_file', default_value=nav2_param_path),

        # 使用不带 TF 重映射的 nav2_bringup（默认自带 -r /tf:=tf 会隔离容器内外的 TF）
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([nav2_bringup_dir,'/launch','/bringup_launch.py']),
            launch_arguments={
                'map': map_yaml_path,
                'use_sim_time': use_sim_time,
                'params_file': nav2_param_path,
                # 关键：覆盖默认的container参数，去掉 -r /tf:=tf 重映射
                'container_name': 'nav2_container',
            }.items(),
        ),

        # 静态变换 base_link -> base_footprint
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='base_link_to_base_footprint',
            arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'base_footprint']
        ),
    ])
