cmake_minimum_required(VERSION 3.20)

project(gh-c)

option(gh_c_testing "Enable testing build")

if (${gh_c_testing})
    enable_testing()
endif()

add_subdirectory(lib)

if (NOT ${gh_c_testing})
    add_subdirectory(src)
else()
    add_subdirectory(tests)
endif()