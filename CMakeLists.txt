cmake_minimum_required(VERSION 3.15)
project(DSA_CPP_Deng)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-fopenmp")

include_directories(/usr/local/include)
link_directories(/usr/local/lib)
link_libraries(armadillo)
add_executable(DSA_CPP_Deng main.cpp)