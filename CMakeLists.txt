
cmake_minimum_required(VERSION 3.22)

project(BilalGTAVI LANGUAGES CXX)

if(NOT DEFINED AML_INCLUDE_DIR)
    message(FATAL_ERROR "AML_INCLUDE_DIR missing")
endif()

add_library(BilalGTAVI SHARED
    src/main.cpp
)

target_compile_features(BilalGTAVI PRIVATE cxx_std_17)

target_include_directories(BilalGTAVI PRIVATE
    "${AML_INCLUDE_DIR}"
)

target_link_libraries(BilalGTAVI PRIVATE log)

set_target_properties(BilalGTAVI PROPERTIES
    OUTPUT_NAME "BilalGTAVI"
)
