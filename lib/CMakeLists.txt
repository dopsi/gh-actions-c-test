add_library(foo
    foo.c
)

target_include_directories(foo INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})