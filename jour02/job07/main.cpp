#include "pingouin.hpp"
#include <iostream>
#include <algorithm>

int main() {
    std::shared_ptr<pingouin> p1 = std::make_shared<pingouin>(1.2, 0.8, 2.5, "Richard");
    p1->ajouterPingouin(p1);
    std::shared_ptr<pingouin> p2 = std::make_shared<pingouin>(1.5, 1.0, 2.8, "Robert");
    p2->ajouterPingouin(p2);
    std::shared_ptr<pingouin> p3 = std::make_shared<pingouin>(1.0, 0.7, 2.2, "Elizabeth");
    p3->ajouterPingouin(p3);

    std::sort(pingouin::colonie.begin(), pingouin::colonie.end(), [](std::shared_ptr<pingouin> p1, std::shared_ptr<pingouin> p2) {
        return p1->getVitesseParcours() < p2->getVitesseParcours();
    });

    pingouin::ajouterNiveauDeCompetence("nage", 3);
    pingouin::ajouterNiveauDeCompetence("marche", 2);
    pingouin::ajouterNiveauDeCompetence("glisse", 4);
    pingouin::afficherNiveauxDeCompetence();
    pingouin::retirerNiveauDeCompetence("marche");
    pingouin::afficherNiveauxDeCompetence();



    

    return 0;
}