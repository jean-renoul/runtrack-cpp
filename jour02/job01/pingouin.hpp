#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP
#include "aquatique.hpp"
#include "terrestre.hpp"

class pingouin : public aquatique, public terrestre {
    public:
        pingouin(double vitesseDeNage, double vitesseDeMarche);
        ~pingouin();
        void nage();
        void marche();
        void sePresenter();

    private:
        double vitesseDeNage;
        double vitesseDeMarche;        
};

#endif