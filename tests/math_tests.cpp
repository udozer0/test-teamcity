#include <gtest/gtest.h>
#include "mylib/math.hpp"

using namespace mylib;

TEST(Math_Add, Simple) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-5, 5), 0);
}

TEST(Math_Factorial, Base) {
    EXPECT_EQ(factorial(0), 1u);
    EXPECT_EQ(factorial(1), 1u);
    EXPECT_EQ(factorial(5), 120u);
}

TEST(Math_Factorial, NegativeThrows) {
    EXPECT_THROW(factorial(-1), std::invalid_argument);
}

TEST(Math_Fibonacci, Sequence) {
    EXPECT_EQ(fibonacci(0), 0u);
    EXPECT_EQ(fibonacci(1), 1u);
    EXPECT_EQ(fibonacci(10), 55u);
}
