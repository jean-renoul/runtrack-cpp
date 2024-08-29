#include "pingouin.hpp"
#include <iostream>
#include <memory>
#include <vector>
#include <string>




pingouin::pingouin(double vitesseDeNage, double vitesseDeMarche, double vitesseDeGlisse, std::string nom) 
    : aquatique(vitesseDeNage), terrestre(vitesseDeMarche), vitesseDeGlisse(vitesseDeGlisse), nom(nom) {
    colonie.push_back(std::shared_ptr<pingouin>(this));
}

pingouin::pingouin(const pingouin &p) 
    : aquatique(p.vitesseDeNage), terrestre(p.vitesseDeMarche), vitesseDeGlisse(p.vitesseDeGlisse), nom(p.nom) {
    colonie.push_back(std::shared_ptr<pingouin>(this));
    std::cout << this->nom << " a ete copie" << std::endl;
}

pingouin::~pingouin() {
    std::cout << this->nom << " est mort" << std::endl;
}

void pingouin::nage() {
    std::cout << this->nom << " nage a une vitesse de " << this->vitesseDeNage << " m/s" << std::endl;
}

void pingouin::marche() {
    std::cout << this->nom << " marche a une vitesse de " << this->vitesseDeMarche << " m/s" << std::endl;
}

void pingouin::sePresenter() {
    std::cout << this->nom << " gesticule et hurle" << std::endl;
}

void pingouin::glisse() {
    std::cout << this->nom << " glisse a une vitesse de " << this->vitesseDeGlisse << " m/s" << std::endl;
}

void pingouin::setVitesseDeGlisse(double vitesseDeGlisse) {
    this->vitesseDeGlisse = vitesseDeGlisse;
}

double pingouin::chrono(double distance, std::string type) {
    if (type == "nage") {
        // this->nage();
        double temps = distance / this->vitesseDeNage;
        std::cout << this->nom << " nage " << distance << "m " << "en " << temps << " secondes" << std::endl;
        return temps;
    } else if (type == "marche") {
        // this->marche();
        double temps = distance / this->vitesseDeMarche;
        std::cout << this->nom << " marche " << distance << "m " << "en " << temps << " secondes" << std::endl;
        return temps;
    } else if (type == "glisse") {
        // this->glisse();
        double temps = distance / this->vitesseDeGlisse;
        std::cout << this->nom << " glisse " << distance << "m " << "en " << temps << " secondes" << std::endl;
        return temps;
    }
    else {
        std::cout << "Type de deplacement inconnu" << std::endl;
        return 0;
    }
}

void pingouin::course(std::vector<std::shared_ptr<pingouin>> colonie) {
    for (std::shared_ptr<pingouin> p : colonie) {
        double temps1 = p->chrono(15, "glisse");
        double temps2 = p->chrono(20, "marche");
        double temps3 = p->chrono(50, "nage");
        double temps4 = p->chrono(15, "marche");
        double tempsTotal = temps1 + temps2 + temps3 + temps4;
        std::cout << p->nom << " a mis " << tempsTotal << " secondes pour parcourir 100m" << std::endl << std::endl;
    }
}