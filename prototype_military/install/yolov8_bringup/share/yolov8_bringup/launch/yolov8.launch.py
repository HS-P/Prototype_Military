from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument

def generate_launch_description():

    #
    # ARGS
    #
    model_type = LaunchConfiguration("model_type")
    model_type_cmd = DeclareLaunchArgument(
        "model_type",
        default_value="YOLO",
        choices=["YOLO", "NAS"],
        description="Model type form Ultralytics (YOLO, NAS")

    model = LaunchConfiguration("model")
    model_cmd = DeclareLaunchArgument(
        "model",
        default_value="yolov8m.pt",
        description="Model name or path")

    tracker = LaunchConfiguration("tracker")
    tracker_cmd = DeclareLaunchArgument(
        "tracker",
        default_value="bytetrack.yaml",
        description="Tracker name or path")

    device = LaunchConfiguration("device")
    device_cmd = DeclareLaunchArgument(
        "device",
        default_value="cuda:0",
        description="Device to use (GPU/CPU)")

    enable = LaunchConfiguration("enable")
    enable_cmd = DeclareLaunchArgument(
        "enable",
        default_value="True",
        description="Whether to start YOLOv8 enabled")

    threshold = LaunchConfiguration("threshold")
    threshold_cmd = DeclareLaunchArgument(
        "threshold",
        default_value="0.5",
        description="Minimum probability of a detection to be published")

    input_image_topic = LaunchConfiguration("input_image_topic")
    input_image_topic_cmd = DeclareLaunchArgument(
        "input_image_topic",
        default_value="/yolo/realsense2_camera/color/image_raw",  # RealSense의 컬러 이미지 토픽
        description="Name of the input image topic")

    image_reliability = LaunchConfiguration("image_reliability")
    image_reliability_cmd = DeclareLaunchArgument(
        "image_reliability",
        default_value="2",
        choices=["0", "1", "2"],
        description="Specific reliability QoS of the input image topic (0=system default, 1=Reliable, 2=Best Effort)")

    namespace = LaunchConfiguration("namespace")
    namespace_cmd = DeclareLaunchArgument(
        "namespace",
        default_value="yolo",
        description="Namespace for the nodes")

    usb_port_id = LaunchConfiguration("usb_port_id")
    usb_port_id_cmd = DeclareLaunchArgument(
        "usb_port_id",
        default_value="2-3.1",  # 사용하려는 USB 포트 ID
        description="USB port ID to which the RealSense camera is connected"
    )

    #
    # NODES
    #
    realsense_node_cmd = Node(
        package="realsense2_camera",
        executable="realsense2_camera_node",
        namespace=namespace,
        name="realsense2_camera",
        output="screen",
        parameters=[{
            "enable_color": True,
            "enable_depth": True,
            "enable_infra1": False,
            "enable_infra2": False,
            "rgb_camera.color_profile": "1280,720,20",
            "depth_module.depth_profile": "1280,720,20",
            "usb_port_id": usb_port_id
        }]
    )

    detector_node_cmd = Node(
        package="yolov8_ros",
        executable="yolov8_node",
        name="yolov8_node",
        namespace=namespace,
        parameters=[{
            "model_type": model_type,
            "model": model,
            "device": device,
            "enable": enable,
            "threshold": threshold,
            "image_reliability": image_reliability,
        }],
        remappings=[("image_raw", input_image_topic)]
    )

    tracking_node_cmd = Node(
        package="yolov8_ros",
        executable="tracking_node",
        name="tracking_node",
        namespace=namespace,
        parameters=[{
            "tracker": tracker,
            "image_reliability": image_reliability
        }],
        remappings=[("image_raw", input_image_topic)]
    )

    debug_node_cmd = Node(
        package="yolov8_ros",
        executable="debug_node",
        name="debug_node",
        namespace=namespace,
        parameters=[{"image_reliability": image_reliability}],
        remappings=[
            ("image_raw", input_image_topic),
            ("detections", "tracking")
        ]
    )

    ld = LaunchDescription()

    ld.add_action(model_type_cmd)
    ld.add_action(model_cmd)
    ld.add_action(tracker_cmd)
    ld.add_action(device_cmd)
    ld.add_action(enable_cmd)
    ld.add_action(threshold_cmd)
    ld.add_action(input_image_topic_cmd)
    ld.add_action(image_reliability_cmd)
    ld.add_action(namespace_cmd)
    ld.add_action(usb_port_id_cmd)  # USB 포트 ID 등록

    ld.add_action(realsense_node_cmd)  # RealSense 노드 추가
    ld.add_action(detector_node_cmd)
    ld.add_action(tracking_node_cmd)
    ld.add_action(debug_node_cmd)

    return ld
