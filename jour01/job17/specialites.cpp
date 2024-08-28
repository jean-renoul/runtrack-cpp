#include <iostream>
#include <string>
#include <array>
#include <random>

enum Specialite {
        IA,
        WEB,
        LOGICIEL,
        RESEAU,
        IMMERSIF
    };

void afficherSpecialite(Specialite spec, int nombreEtudiants) {
    std::string nomSpecialite;
    switch (spec) {
        case IA: 
            nomSpecialite = "Intelligence Artificielle";
            break;
        case WEB: 
            nomSpecialite = "Developpement Web";
            break;
        case LOGICIEL: 
            nomSpecialite = "Developpement Logicielle";
            break;
        case IMMERSIF: 
            nomSpecialite = "Systemes Immersifs";
            break;
        case RESEAU: 
            nomSpecialite = "Cybersecurite et Reseaux";
            break;
        default:
            nomSpecialite = "Inconnue";
            break;
    }
    std::cout << nomSpecialite << " - Nombre d'etudiants : " << nombreEtudiants << " - Places disponibles : " << 66 - nombreEtudiants << std::endl;
}

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(12, 66);

    int nombreEtudiants[5];

    for (int i = 0; i < 5; ++i) {
        nombreEtudiants[i] = dis(gen);
    }

    for (int i = 0; i < 5; ++i) {
        afficherSpecialite(Specialite(i), nombreEtudiants[i]);
    }

    return 0;
}