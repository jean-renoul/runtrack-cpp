#include "sword.hpp"

sword::sword() {
    this->damage = 4;
    this->range = 1;
}

void sword::attack(character &c) {
    std::cout << "Sword attack!" << std::endl;
    c.takeDamage(this->damage);
}