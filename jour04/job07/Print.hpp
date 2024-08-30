#ifndef PRINT_HPP
#define PRINT_HPP
#include <iostream>

template <typename T>
void print(const T& arg) {
    std::cout << arg << std::endl;
}

template <typename T, typename... Args>
void print(const T& arg, const Args&... args) {
    std::cout << arg << ", ";
    print(args...);
}

#endif