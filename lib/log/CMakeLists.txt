add_library(log
    log.c
)

target_include_directories(log INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})