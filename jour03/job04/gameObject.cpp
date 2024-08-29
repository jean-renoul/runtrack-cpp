#include "gameObject.hpp"
#include <iostream>

gameObject::gameObject() {
    this->x = 0;
    this->y = 0;
}

gameObject::gameObject(double x, double y) : vector2d(x, y) {
    this->x = x;
    this->y = y;
}

void gameObject::update() {
    std::cout << "Updating gameObject at (" << this->x << ", " << this->y << ")" << std::endl;
}

void gameObject::update() const {
    std::cout << "Updating gameObject at (" << this->x << ", " << this->y << ")" << std::endl;
}
