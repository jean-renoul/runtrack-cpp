#include <iostream>

int main() {
    std::cout << "Entrez une annee : ";
    int annee;
    std::cin >> annee;

    if (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0)) {
        std::cout << "L'annee " << annee << " est bissextile" << std::endl;
    } else {
        std::cout << "L'annee " << annee << " n'est pas bissextile" << std::endl;
    }
    return 0;
}