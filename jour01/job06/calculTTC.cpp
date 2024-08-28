#include <iostream>

float calculPrixTTC(float prixHt, float nombreArticles, float tauxTVA) {
    return prixHt * nombreArticles * (1 + tauxTVA / 100);
}

int main() {
    float prixHt, nombreArticles, tauxTVA;
    std::cout << "Entrez le prix HT d'un article : ";
    std::cin >> prixHt;
    std::cout << "Entrez le nombre d'articles : ";
    std::cin >> nombreArticles;
    std::cout << "Entrez le taux de la TVA : ";
    std::cin >> tauxTVA;
    std::cout << "Le prix TTC est de " << calculPrixTTC(prixHt, nombreArticles, tauxTVA) << std::endl;
    return 0;
}