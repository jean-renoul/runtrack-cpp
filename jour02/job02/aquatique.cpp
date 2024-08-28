#include "aquatique.hpp"
#include <iostream>

aquatique::aquatique(double vitesseDeNage) {
    this->vitesseDeNage = vitesseDeNage;
}

aquatique::~aquatique() {
    std::cout << "Bete aquatique est morte" << std::endl;
}

void aquatique::nage() {
    std::cout << "Je nage a une vitesse de " << this->vitesseDeNage << " km/h" << std::endl;
}