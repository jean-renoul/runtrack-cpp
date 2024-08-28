#ifndef AQUATIQUE_HPP
#define AQUATIQUE_HPP

class aquatique {
    public:
        aquatique(double vitesseDeNage);
        ~aquatique();

    protected:
        virtual void nage();
        double vitesseDeNage;
};


#endif