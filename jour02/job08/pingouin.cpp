#include "pingouin.hpp"
#include <iostream>
#include <memory>
#include <vector>
#include <string>

pingouin::pingouin(double vitesseDeNage, double vitesseDeMarche, double vitesseDeGlisse, std::string nom) 
    : aquatique(vitesseDeNage), terrestre(vitesseDeMarche), vitesseDeGlisse(vitesseDeGlisse), nom(nom), vitesseParcours(0), amis() {
    this->vitesseParcours = calculerVitesseParcours();
}

pingouin::pingouin(const pingouin &p) 
    : aquatique(p.vitesseDeNage), terrestre(p.vitesseDeMarche), vitesseDeGlisse(p.vitesseDeGlisse), nom(p.nom), vitesseParcours(p.vitesseParcours) {
    std::cout << this->nom << " a ete copie" << std::endl;
}

void pingouin::ajouterPingouin(std::shared_ptr<pingouin> p) {
    colonie.push_back(p);
    
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
        double temps = distance / this->vitesseDeNage;
        return temps;
    } else if (type == "marche") {
        double temps = distance / this->vitesseDeMarche;
        return temps;
    } else if (type == "glisse") {
        double temps = distance / this->vitesseDeGlisse;
        return temps;
    }
    else {
        std::cout << "Type de deplacement inconnu" << std::endl;
        return 0;
    }
}

double pingouin::calculerVitesseParcours() {
    double temps1 = this->chrono(15, "glisse");
    double temps2 = this->chrono(20, "marche");
    double temps3 = this->chrono(50, "nage");
    double temps4 = this->chrono(15, "marche");
    double tempsTotal = temps1 + temps2 + temps3 + temps4;
    this->vitesseParcours = tempsTotal;
    return tempsTotal;
}
    

void pingouin::course(std::vector<std::shared_ptr<pingouin>> colonie) {
    for (std::shared_ptr<pingouin> p : colonie) {
        std::cout << p->nom << " a realise le parcours en " << p->calculerVitesseParcours() << " secondes" << std::endl << std::endl;
    }
}

double pingouin::getVitesseParcours() {
    return this->vitesseParcours;
}

double pingouin::getVitesseDeGlisse() {
    return this->vitesseDeGlisse;
}

std::string pingouin::getNom() {
    return this->nom;
}

std::vector<std::shared_ptr<pingouin>> pingouin::colonie;

std::list<std::string> pingouin::lieuxDeRencontres;

std::map<std::string, int> pingouin::niveauxDeCompetence;

void pingouin::ajouterLieuDeRencontre(std::string lieu) {
    lieuxDeRencontres.push_back(lieu);
}

void pingouin::retirerLieuDeRencontre(std::string lieu) {
    lieuxDeRencontres.remove(lieu);
}

void pingouin::afficherLieuxDeRencontres() {
    for (std::string lieu : lieuxDeRencontres) {
        std::cout << lieu << std::endl;
    }
}

void pingouin::ajouterNiveauDeCompetence(std::string competence, int niveau) {
    niveauxDeCompetence[competence] = niveau;
}

void pingouin::retirerNiveauDeCompetence(std::string competence) {
    niveauxDeCompetence.erase(competence);
}

void pingouin::afficherNiveauxDeCompetence() {
    for (std::pair<std::string, int> competence : niveauxDeCompetence) {
        std::cout << competence.first << " : " << competence.second << std::endl;
    }
}

void pingouin::ajouterAmi(std::weak_ptr<pingouin> ami) {
    amis.insert(ami);
}

void pingouin::retirerAmi(std::weak_ptr<pingouin> ami) {
    amis.erase(ami);
}

void pingouin::afficherAmis() {
    if (amis.empty()) {
        std::cout << "Pas d'amis pour : " << this->nom << std::endl;
    }
    else {
        std::cout << this->nom << " a les amis suivants : " << std::endl;
        for (const auto& ami_weak : amis) {
            if (auto ami = ami_weak.lock()) {
                std::cout << "- " << ami->nom << std::endl;
            }
        }
    }
}

