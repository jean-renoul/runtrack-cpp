#include <iostream>

int multiple(int a, int b) {
    return a * b;
}

int main() {
    std::cout << "Entrez un premier nombre : ";
    int a;
    std::cin >> a;
    
    std::cout << "Entrez un deuxième nombre : ";
    int b;
    std::cin >> b;

    std::cout << "Le produit de " << a << " et " << b << " est " << multiple(a, b) << std::endl;
    return 0;
}