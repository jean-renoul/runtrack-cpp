#include <iostream>

int main () {
    std::cout << "Entrez un nombre : ";
    int scanner;
    std::cin >> scanner;
    if (scanner % 2 == 0) {
        std::cout << "Le nombre est pair" << std::endl;
    } else {
        std::cout << "Le nombre est impair" << std::endl;
    }
}