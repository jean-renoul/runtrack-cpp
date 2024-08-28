#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP
#include "aquatique.hpp"
#include "terrestre.hpp"
#include <vector>
#include <memory>

class pingouin : public aquatique, public terrestre {
    public:
        pingouin(double vitesseDeNage, double vitesseDeMarche, double vitesseDeGlisse);
        pingouin(const pingouin &p);
        ~pingouin();
        void nage();
        void marche();
        void sePresenter();
        void glisse();
        void setVitesseDeGlisse(double vitesseDeGlisse);
        static std::vector<std::shared_ptr<pingouin>> vecteurPingouins;

    private:
        double vitesseDeGlisse;
};

#endif