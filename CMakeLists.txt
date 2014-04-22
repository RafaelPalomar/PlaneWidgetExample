project(PlaneWidgetExample)

cmake_minimum_required(VERSION 2.8)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

add_executable(PlaneWidgetExample
  main.cxx
)

TARGET_LINK_LIBRARIES(PlaneWidgetExample
  vtkWidgets
  vtkRendering
)