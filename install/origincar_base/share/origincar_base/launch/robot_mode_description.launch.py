#!/usr/bin/env python3
"""
正确的 robot_state_publisher 启动文件。
通过参数服务器传递 robot_description，避免警告并确保兼容性。
"""
import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    """
    生成启动描述，主要任务是启动 robot_state_publisher 节点，
    并将机器人模型（URDF）加载到参数服务器。
    """
    # 1. 确定URDF文件的绝对路径
    #    请确保 'origincar_description' 是您的机器人描述包名，
    #    'urdf/origincar.urdf' 是模型文件在包内的相对路径。
    urdf_path = os.path.join(
        get_package_share_directory('origincar_description'),
        'urdf',
        'origincar.urdf'  # 如果使用 .xacro 文件，请将后缀改为 .urdf.xacro
    )

    # 2. 读取URDF文件的内容
    try:
        with open(urdf_path, 'r') as infp:
            robot_description_content = infp.read()
    except FileNotFoundError:
        raise FileNotFoundError(f"无法找到URDF文件: {urdf_path}。请检查包名和文件路径。")

    # 3. 创建并配置 robot_state_publisher 节点
    #    关键：通过 'parameters' 字典传递 'robot_description'
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',  # 可选，将节点输出打印到终端，便于调试
        parameters=[{
            'robot_description': robot_description_content
        }]
    )

    # 4. 返回启动描述
    return LaunchDescription([
        robot_state_publisher_node
    ])