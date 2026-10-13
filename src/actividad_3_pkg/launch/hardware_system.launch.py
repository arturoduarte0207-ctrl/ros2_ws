import os
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='actividad_3_pkg',
            executable='emulator_node',
            name='emulator_node',
            output='screen'
        ),
        Node(
            package='actividad_3_pkg',
            executable='monitor_node',
            name='monitor_node',
            output='screen',
            parameters=[{'umbral_temperatura': 75}]
        ),
        Node(
            package='actividad_3_pkg',
            executable='operator_node',
            name='operator_node',
            output='screen'
        )
    ])