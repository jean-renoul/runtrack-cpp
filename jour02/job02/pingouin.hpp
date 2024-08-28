#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP
#include "aquatique.hpp"
#include "terrestre.hpp"

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
        void setVitesseDeNage(double vitesseDeNage);
        void setVitesseDeMarche(double vitesseDeMarche);

    private:
        double vitesseDeGlisse;
        double vitesseDeNage;
        double vitesseDeMarche;        
};

#endif