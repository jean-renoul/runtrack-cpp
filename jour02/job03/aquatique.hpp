#ifndef AQUATIQUE_HPP
#define AQUATIQUE_HPP

class aquatique {
    public:
        aquatique(double vitesseDeNage);
        void setVitesseDeNage(double vitesseDeNage);
        virtual void nage();

    protected:        
        double vitesseDeNage;
};


#endif