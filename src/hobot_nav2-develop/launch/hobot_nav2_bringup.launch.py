# Copyright (c) 2022，Horizon Robotics.

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    originbot_navigation_dir = get_package_share_directory('hobot_nav2')
    launch_dir = os.path.join(originbot_navigation_dir, 'launch')

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    map_yaml_path = LaunchConfiguration('map',
        default=os.path.join(originbot_navigation_dir,'maps','final_6.yaml'))   # 跟 final_6.pgm 同名；指向 final_6.pgm（row_6.yaml 的副本）
    nav2_param_path = LaunchConfiguration('params_file',
        default=os.path.join(originbot_navigation_dir,'param','hobot_nav2.yaml'))

    # 使用无 TF 重映射的 bringup，让 AMCL 能看到外部 EKF 的 TF
    bringup_launch = os.path.join(launch_dir, 'bringup_launch_noremap.py')
    if not os.path.exists(bringup_launch):
        bringup_launch = os.path.join(
            get_package_share_directory('nav2_bringup'),'launch','bringup_launch.py')

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value=use_sim_time),
        DeclareLaunchArgument('map', default_value=map_yaml_path),
        DeclareLaunchArgument('params_file', default_value=nav2_param_path),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(bringup_launch),
            launch_arguments={
                'map': map_yaml_path,
                'use_sim_time': use_sim_time,
                'params_file': nav2_param_path}.items(),
        ),
    ])
