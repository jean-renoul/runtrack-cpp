#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP
#include "aquatique.hpp"
#include "terrestre.hpp"
#include <vector>
#include <memory>
#include <string>

class pingouin : public aquatique, public terrestre {
    public:
        pingouin(double vitesseDeNage, double vitesseDeMarche, double vitesseDeGlisse, std::string nom);
        pingouin(const pingouin &p);
        ~pingouin();
        void ajouterPingouin(std::shared_ptr<pingouin> p);
        void nage();
        void marche();
        void sePresenter();
        void glisse();
        void setVitesseDeGlisse(double vitesseDeGlisse);
        double chrono(double distance, std::string type);
        static void course(std::vector<std::shared_ptr<pingouin>> colonie);
        static std::vector<std::shared_ptr<pingouin>> colonie;
        double calculerVitesseParcours();
        double getVitesseParcours();
        double getVitesseDeGlisse();
        std::string getNom();

    private:
        double vitesseDeGlisse;
        std::string nom;
        double vitesseParcours;
};

#endif