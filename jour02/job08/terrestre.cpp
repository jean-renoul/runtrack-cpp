#include "terrestre.hpp"
#include <iostream>

terrestre::terrestre(double vitesseDeMarche) {
    this->vitesseDeMarche = vitesseDeMarche;
}

void terrestre::marche() {
    std::cout << "Je marche a une vitesse de " << this->vitesseDeMarche << " m/s" << std::endl;
}

void terrestre::setVitesseDeMarche(double v) {
    this->vitesseDeMarche = v;
}

double terrestre::getVitesseDeMarche() {
    return this->vitesseDeMarche;
}
