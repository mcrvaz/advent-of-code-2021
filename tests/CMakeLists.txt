include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(
    TestFiles
    day1-part1-test.cc
    day1-part2-test.cc
    day2-part1-test.cc
)
target_link_libraries(
    TestFiles
    gtest_main
)
include(GoogleTest)
gtest_discover_tests(TestFiles)