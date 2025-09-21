#pragma once
#include <stdexcept>
#include <cstdint>

namespace mylib {

int add(int a, int b) noexcept;
std::uint64_t factorial(int n);
std::uint64_t fibonacci(unsigned n);

} // namespace mylib
