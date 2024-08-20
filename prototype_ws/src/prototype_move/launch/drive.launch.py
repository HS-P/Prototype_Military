import os
import launch

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return launch.LaunchDescription([
        Node(
            package='prototype_move',
            executable='lidar_filter',
            name='filtering_lidar',
            output='screen',
        ),
        Node(
            package='prototype_move',
            executable='real_move',
            name='real_driving',
            output='screen'
        )
    ])