#include <iostream>

int main() {
    int somme = 0;

    std::cout << "Entrez un premier nombre : ";
    int scanner;
    std::cin >> scanner;
    somme += scanner;

    std::cout << "Entrez un deuxième nombre : ";
    std::cin >> scanner;
    somme += scanner;

    std::cout << "Entrez un troisième nombre : ";
    std::cin >> scanner;
    somme += scanner;

    std::cout << "Entrez un quatrième nombre : ";
    std::cin >> scanner;
    somme += scanner;

    std::cout << "Entrez un cinquième nombre : ";
    std::cin >> scanner;
    somme += scanner;

    std::cout << "La moyenne des cinq nombres est " << somme / 5 << std::endl;
    return 0;
}



    
    