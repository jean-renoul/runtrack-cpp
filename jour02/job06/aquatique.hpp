#ifndef AQUATIQUE_HPP
#define AQUATIQUE_HPP

class aquatique {
    public:
        aquatique(double vitesseDeNage);
        void setVitesseDeNage(double vitesseDeNage);
        double getVitesseDeNage();
        virtual void nage();

    protected:        
        double vitesseDeNage;
};


#endif