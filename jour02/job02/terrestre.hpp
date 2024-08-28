#ifndef TERRESTRE_HPP
#define TERRESTRE_HPP

class terrestre {
    public:
        terrestre(double vitesseDeMarche);
        ~terrestre();

    protected:
        virtual void marche();
        double vitesseDeMarche;
};

#endif