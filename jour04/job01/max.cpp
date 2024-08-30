#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a > b)? a : b;
}

int main() {
    std::cout << max(1, 2) << std::endl;
    std::cout << max(2.5, 2.3) << std::endl;
    std::cout << max('c', 'b') << std::endl;
    return 0;
}