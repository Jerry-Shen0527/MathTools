aux_source_directory(. algorithm_src)
add_library(Algorithm STATIC ${algorithm_src})
include_directories(${PROJECT_SOURCE_DIR}/include)
target_link_libraries(Algorithm Basic)
