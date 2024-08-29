#include "bow.hpp"

bow::bow() {
    this->damage = 1;
    this->range = 4;
}

void bow::attack(character &c) {
    std::cout << "bow attack!" << std::endl;
    c.takeDamage(this->damage);
}