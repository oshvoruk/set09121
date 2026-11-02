cmake_minimum_required(VERSION 3.31)

project(set09121)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_subdirectory(lib/SFML)

add_executable(set09121 src/main.cpp)

target_link_libraries(set09121 PRIVATE sfml-graphics)