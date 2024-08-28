#include "pingouin.hpp"
#include <iostream>

pingouin::pingouin(double vitesseDeNage, double vitesseDeMarche, double vitesseDeGlisse) : aquatique(vitesseDeNage), terrestre(vitesseDeMarche) {
    this->vitesseDeNage = vitesseDeNage;
    this->vitesseDeMarche = vitesseDeMarche;
    this->vitesseDeGlisse = vitesseDeGlisse;
}

pingouin::pingouin(const pingouin &p) : aquatique(p.vitesseDeNage), terrestre(p.vitesseDeMarche) {
    this->vitesseDeNage = p.vitesseDeNage;
    this->vitesseDeMarche = p.vitesseDeMarche;
    this->vitesseDeGlisse = p.vitesseDeGlisse;
    std::cout << "Pingouin est copie" << std::endl;
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

void pingouin::glisse() {
    std::cout << "Le pingouin glisse" << " a une vitesse de " << this->vitesseDeGlisse << " km/h" << std::endl;
}

void pingouin::setVitesseDeGlisse(double vitesseDeGlisse) {
    this->vitesseDeGlisse = vitesseDeGlisse;
}

void pingouin::setVitesseDeNage(double vitesseDeNage) {
    this->vitesseDeNage = vitesseDeNage;
}

void pingouin::setVitesseDeMarche(double vitesseDeMarche) {
    this->vitesseDeMarche = vitesseDeMarche;
}