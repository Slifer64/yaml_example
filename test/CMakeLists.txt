cmake_minimum_required(VERSION 2.8.3)
project(yml_test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(
	Yaml-cpp REQUIRED
)

set(SRC_LIST
	""
)

file(GLOB INCLUDE_LIST "")


include_directories(
  include
)

add_executable(test
  src/main.cpp ${INCLUDE_LIST} ${SRC_LIST}
)

target_link_libraries(test
  yaml-cpp
)
