cmake_minimum_required(VERSION 3.14)
project(advent-of-code-2021)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(CTest)
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(NAME_LIB "advent-of-code-2021")
set(NAME_TEST "test_advent-of-code-2021")
set(PATH_BUILD "${PROJECT_SOURCE_DIR}/build")
set(PATH_SOURCE "${PROJECT_SOURCE_DIR}/src")
set(PATH_TEST "${PROJECT_SOURCE_DIR}/tests")

file(GLOB SOURCES_LIB "${PATH_SOURCE}/**/**.cpp" "${PATH_SOURCE}/**/**.hh")
file(GLOB SOURCES_TEST "${PATH_TEST}/*.cpp" "${PATH_TEST}/*.hh")

add_library(${NAME_LIB} "${SOURCES_LIB}")
add_executable(main src/main.cpp)
add_executable(${NAME_TEST} "${SOURCES_TEST}")

target_link_libraries(main ${NAME_LIB})
target_link_libraries(${NAME_TEST} ${NAME_LIB} gtest_main)

include(GoogleTest)
gtest_discover_tests(${NAME_TEST})
