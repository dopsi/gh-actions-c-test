add_executable(gh-c
    main.c
)

target_link_libraries(gh-c PRIVATE foo log)
target_include_directories(gh-c PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)