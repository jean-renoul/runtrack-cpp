#include "character.hpp"
#include <iostream>

character::character() {
    this->x = 0;
    this->y = 0;
    this->name = "Default";
    this->life = 100;

}

character::character(double x, double y, std::string name, int life) : gameObject(x, y), name(name), life(life) {
    this->x = x;
    this->y = y;
    this->name = name;
    this->life = life;
}

void character::draw() {
    std::cout << "Drawing character at (" << this->x << ", " << this->y << ")" << std::endl;
}

void character::update() {
    std::cout << "Updating character at (" << this->x << ", " << this->y << ")" << std::endl;
}

void character::isAlive() {
    if (this->life > 0) {
        std::cout << this->name << " is alive" << std::endl;
    } else {
        std::cout << this->name << " is dead" << std::endl;
    }
}
