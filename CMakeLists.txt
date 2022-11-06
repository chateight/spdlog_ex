cmake_minimum_required(VERSION 3.14)
project(SpdProject)

set(CMAKE_CXX_STANDARD 14)

include_directories("packages") 

add_executable(spdlogTest src/spdlog_t.cpp)