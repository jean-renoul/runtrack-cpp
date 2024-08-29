#include "aquatique.hpp"
#include <iostream>

aquatique::aquatique(double vitesseDeNage) {
    this->vitesseDeNage = vitesseDeNage;
}

void aquatique::nage() {
    std::cout << "Je nage a une vitesse de " << this->vitesseDeNage << " m/s" << std::endl;
}

void aquatique::setVitesseDeNage(double v) {
    this->vitesseDeNage = v;
}

double aquatique::getVitesseDeNage() {
    return this->vitesseDeNage;
}