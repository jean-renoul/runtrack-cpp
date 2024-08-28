#include <iostream>
#include <cstdint>

// Function to check if the number of bits set to 1 is even only using bitwise operations

bool evenNumberOfOnes(uint32_t number) {
    int count = 0;
    while (number) {
        count += number & 1;
        number >>= 1;
    }
    return (count & 1) == 0;
}

int main() {
    uint32_t number = 42;
    std::cout << "The number of bits set to 1 is " << (evenNumberOfOnes(number) ? "even" : "odd") << std::endl;
    return 0;
}