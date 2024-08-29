#include "pingouin.hpp"
#include <iostream>

std::vector<std::shared_ptr<pingouin>> pingouin::vecteurPingouins;

int main() {
    std::shared_ptr<pingouin> p1 = std::make_shared<pingouin>(1.2, 0.8, 2.5);
    std::shared_ptr<pingouin> p2 = std::make_shared<pingouin>(1.5, 1.0, 2.8);
    std::shared_ptr<pingouin> p3 = std::make_shared<pingouin>(1.0, 0.7, 2.2);

    p1->nage();
    p1->setVitesseDeNage(2);
    p1->nage();

    for (const auto& p : pingouin::vecteurPingouins) {
        p->sePresenter();
    }

    for (std::shared_ptr<pingouin> p : pingouin::vecteurPingouins) {
        p.reset();
    }

    return 0;
}