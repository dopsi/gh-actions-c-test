add_library(foo
    foo.c
)

target_include_directories(foo INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(foo PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(foo PRIVATE log)

configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)