cmake_minimum_required(VERSION 3.17)
project(MathTools VERSION 0.0)


set(CMAKE_CXX_STANDARD 17)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) 
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

set(CMAKE_DEBUG_POSTFIX _d)
add_subdirectory(src)