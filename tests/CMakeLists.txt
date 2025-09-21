add_executable(math_tests
    math_tests.cpp
)

target_link_libraries(math_tests
    PRIVATE
      mylib
      GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(math_tests)
