cmake_minimum_required(VERSION 3.25...4.1)

project(
    Img
    VERSION 0.0
    DESCRIPTION "Image processing algorithms in C++"
    LANGUAGES CXX
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(cmake/Dependencies.cmake)
include(cmake/PreventInsource.cmake)

add_subdirectory(src)
add_subdirectory(app)
