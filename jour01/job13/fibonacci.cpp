#include <iostream>
#include <cstdint>

template<int N>
struct Fibonacci {
    static constexpr int value = Fibonacci<N-1>::value + Fibonacci<N-2>::value;
};

template<>
struct Fibonacci<0> {
    static constexpr int value = 0;
};

template<>
struct Fibonacci<1> {
    static constexpr int value = 1;
};

template<int... Indices>
void print_fibonacci(std::integer_sequence<int, Indices...>) {
    ((std::cout << Fibonacci<Indices>::value << std::endl), ...);
}

bool evenNumberOfOnes(uint32_t number) {
    int count = 0;
    while (number) {
        count += number & 1;
        number >>= 1;
    }
    return count % 2 == 0;
}

int main() {
    constexpr int nombre = 10;
    print_fibonacci(std::make_integer_sequence<int, nombre + 1>{});

    uint32_t number = 42;
    std::cout << "Le nombre de bits a 1 est " << (evenNumberOfOnes(number) ? "pair" : "impair") << std::endl;
    return 0;
}