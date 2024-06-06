cmake_minimum_required(VERSION 3.0)

project(Tomdate)

find_package(Boost REQUIRED COMPONENTS log)

set(SRC_DIR src)

add_executable(tomdate ${SRC_DIR}/main.cpp)
target_link_libraries(tomdate Boost::log)
