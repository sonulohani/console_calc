cmake_minimum_required(VERSION 3.10)

project(console_calc)

include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

add_executable(console_calc ${CMAKE_CURRENT_LIST_DIR}/src/main.cpp 
                            ${CMAKE_CURRENT_LIST_DIR}/src/MathHelper.cpp)

set_property(TARGET console_calc PROPERTY CXX_STANDARD 17)