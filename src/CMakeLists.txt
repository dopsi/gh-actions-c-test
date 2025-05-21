add_executable(gh-c
    main.c
)

target_link_libraries(gh-c PRIVATE foo)