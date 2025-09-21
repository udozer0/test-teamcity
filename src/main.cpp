#include <iostream>
#include "mylib/math.hpp"

int main() {
    std::cout << "add(2, 3) = " << mylib::add(2, 3) << "\n";
    std::cout << "factorial(5) = " << mylib::factorial(5) << "\n";
    std::cout << "fibonacci(10) = " << mylib::fibonacci(10) << "\n";
    return 0;
}
