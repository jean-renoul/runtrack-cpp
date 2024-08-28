#ifndef TERRESTRE_HPP
#define TERRESTRE_HPP

class terrestre {
    public:
        terrestre(double vitesseDeMarche);
        void setVitesseDeMarche(double vitesseDeMarche);
        virtual void marche();

    protected:
        double vitesseDeMarche;
};

#endif