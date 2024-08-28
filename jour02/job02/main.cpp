#include "pingouin.hpp"
#include <iostream>

int main() {
    pingouin p(10, 5, 15);
    p.nage();
    p.marche();
    p.sePresenter();
    p.glisse();
    p.setVitesseDeGlisse(20);
    p.glisse();
    p.setVitesseDeNage(15);
    p.nage();
    p.setVitesseDeMarche(10);
    p.marche();

    pingouin p2(p);
    return 0;
}