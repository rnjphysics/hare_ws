from launch import LaunchDescription
from launch_ros.actions import Node

from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():

    locomotion_config = os.path.join(
        get_package_share_directory('hare_locomotion'),
        'config',
        'locomotion.yaml'
    )

    can_config = os.path.join(
        get_package_share_directory('hare_can'),
        'config',
        'can.yaml'
    )

    return LaunchDescription([

        Node(
            package='hare_locomotion',
            executable='locomotion_node',
            name='locomotion_node',
            parameters=[locomotion_config],
            output='screen'
        ),

        Node(
            package='hare_can',
            executable='can_interface_node',
            name='can_interface_node',
            parameters=[can_config],
            output='screen'
        ),

        Node(
            package='hare_web',
            executable='status_server',
            name='hare_web',
            output='screen'
        ),

    ])
