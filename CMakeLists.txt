cmake_minimum_required (VERSION 2.8)

project (dcCore)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
message ("cxx Flags: " ${CMAKE_CXX_FLAGS})

add_subdirectory(src)