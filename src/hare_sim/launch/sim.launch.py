import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    package_share = get_package_share_directory("hare_sim")
    ros_gz_sim_share = get_package_share_directory("ros_gz_sim")

    world = os.path.join(package_share, "worlds", "hare.sdf")
    bridge_config = os.path.join(package_share, "config", "bridge.yaml")

    declare_gz_args = DeclareLaunchArgument(
        "gz_args",
        default_value=f"-r {world}",
        description="Arguments passed to Gazebo Sim. Use '-s -r ...' for headless mode.",
    )

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(ros_gz_sim_share, "launch", "gz_sim.launch.py")
        ),
        launch_arguments={"gz_args": LaunchConfiguration("gz_args")}.items(),
    )

    bridge = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        name="hare_sim_bridge",
        parameters=[{"config_file": bridge_config}],
        output="screen",
    )

    return LaunchDescription([declare_gz_args, gazebo, bridge])
