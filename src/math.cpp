#include "mylib/math.hpp"

namespace mylib {

int add(int a, int b) noexcept {
    return a + b;
}

std::uint64_t factorial(int n) {
    if (n < 0) throw std::invalid_argument("factorial: n must be >= 0");
    std::uint64_t r = 1;
    for (int i = 2; i <= n; ++i) r *= static_cast<std::uint64_t>(i);
    return r;
}

std::uint64_t fibonacci(unsigned n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    std::uint64_t a = 0, b = 1;
    for (unsigned i = 2; i <= n; ++i) {
        auto next = a + b;
        a = b;
        b = next;
    }
    return b;
}

} // namespace mylib
