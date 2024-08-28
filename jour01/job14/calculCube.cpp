#include <iostream>

//calculate the sum of the cube of the numbers between 5 and n

int calculateCube(int n) {
    int sum = 0;
    for (int i = 5; i <= n; i++) {
        sum += i * i * i;
    }
    return sum;
}

int main() {
    std::cout << "Entrez un nombre : ";
    int scanner;
    std::cin >> scanner;

    if (scanner < 5) {
        std::cout << "Le nombre doit être supérieur ou égal à 5" << std::endl;
        return 1;
    }
    else {
        std::cout << "La somme des cubes des nombres entre 5 et " << scanner << " est " << calculateCube(scanner) << std::endl;
        return 0;
    }
}