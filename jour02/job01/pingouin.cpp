#include "pingouin.hpp"
#include <iostream>

pingouin::pingouin(double vitesseDeNage, double vitesseDeMarche) : aquatique(vitesseDeNage), terrestre(vitesseDeMarche) {
    this->vitesseDeNage = vitesseDeNage;
    this->vitesseDeMarche = vitesseDeMarche;
}

pingouin::~pingouin() {
    std::cout << "Pingouin est mort" << std::endl;
}

void pingouin::nage() {
    std::cout << "Le pingouin nage" << " a une vitesse de " << this->vitesseDeNage << " km/h" << std::endl;
}

void pingouin::marche() {
    std::cout << "Le pingouin marche" << " a une vitesse de " << this->vitesseDeMarche << " km/h" << std::endl;
}

void pingouin::sePresenter() {
    std::cout << "Le pingouin bouge et hurle" << std::endl;
}