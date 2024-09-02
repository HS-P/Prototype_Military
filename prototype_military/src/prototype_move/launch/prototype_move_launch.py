from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
        package='prototype_move',
        executable='led',
        name='led_node',
        output='screen',
    )
        
        Node(
            package='prototype_motor',
            executable='nurimotor',
            name='nurimotor_node',
            output='screen',
        )
    ])