aux_source_directory(. basic_src)
add_library(Basic STATIC ${basic_src})
include_directories(${PROJECT_SOURCE_DIR}/include)
