cmake_minimum_required(VERSION 3.8)
project(quycaros_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
# find_package(<dependency> REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/ControlMsg.msg"
  "srv/GetVariable1.srv"
  "srv/SetVariable1.srv"
  "srv/GetVariable2.srv"
  "srv/SetVariable2.srv"
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
