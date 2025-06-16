cmake_minimum_required(VERSION 3.20)

project(gh-c)

option(gh_c_testing "Enable testing build")

execute_process(COMMAND git describe --abbrev --dirty OUTPUT_VARIABLE GIT_DESC OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND git log --pretty="%aI" -n1 OUTPUT_VARIABLE GIT_DATE OUTPUT_STRIP_TRAILING_WHITESPACE)

if (${gh_c_testing})
    enable_testing()
endif()

add_subdirectory(lib)

if (NOT ${gh_c_testing})
    add_subdirectory(src)
else()
    add_subdirectory(tests)
endif()