#include <iostream>

int main() {
    std::cout << "Entrez un nombre : ";
    int scanner;
    std::cin >> scanner;

    int resultat = 0;

    while (scanner != 0) {
        resultat = resultat * 10 + scanner % 10;
        scanner /= 10;
    }

    std::cout << "Le nombre inverse est " << resultat << std::endl;
    return 0;
}