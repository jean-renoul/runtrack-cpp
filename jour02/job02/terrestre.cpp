#include "terrestre.hpp"
#include <iostream>

terrestre::terrestre(double vitesseDeMarche) {
    this->vitesseDeMarche = vitesseDeMarche;
}

terrestre::~terrestre() {
    std::cout << "Bete terrestre est morte" << std::endl;
}

void terrestre::marche() {
    std::cout << "Je marche a une vitesse de " << this->vitesseDeMarche << " km/h" << std::endl;
}
