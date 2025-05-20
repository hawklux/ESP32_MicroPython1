cmake_minimum_required(VERSION 3.8)
project(interface_pkg1)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED) #geometry_msgs패키지 사용선언
find_package(rosidl_default_generators REQUIRED) #ROS2 인터페이스 생성 도구

# 메시지 및 서비스 파일을 생성: .hpp, .py 등 언어별 인터페이스로 변환
rosidl_generate_interfaces(${PROJECT_NAME} # 패키지명
  "msg/Message1.msg"  # 이 파일로 메시지 인터페이스 생성
  "msg/Message2.msg"  # geometry_msgs에 의존(geometry_msgs/Point center)
  "srv/Service1.srv"  # 이 파일로 서비스 인터페이스 생성
  DEPENDENCIES geometry_msgs # Message2가 사용하므로 추가
)

# # 런타임 의존성 export 추가(튜토리얼에 없지만 추가함. 그러면 다른 패키지에서 import(의존성 선언)해서 쓸 수 있음.)
# ament_export_dependencies(rosidl_default_runtime)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
