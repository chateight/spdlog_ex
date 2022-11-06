cmake_minimum_required(VERSION 3.14)
project(SpdProject)

set(CMAKE_CXX_STANDARD 14)

if(NOT TARGET spdlog)
    # Stand-alone build
    find_package(spdlog REQUIRED)
endif()

# ---------------------------------------------------------------------------------------
# Example of using pre-compiled library
# ---------------------------------------------------------------------------------------

add_executable(spdlogTest src/spdlog_t.cpp)
target_link_libraries(spdlogTest PRIVATE spdlog::spdlog)
