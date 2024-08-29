#include "spear.hpp"

spear::spear() {
    this->damage = 2;
    this->range = 2;
}

void spear::attack(character &c) {
    std::cout << "Spear attack!" << std::endl;
    c.takeDamage(this->damage);
}