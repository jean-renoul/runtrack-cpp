#include "decor.hpp"
#include <iostream>

decor::decor() {
    this->x = 0;
    this->y = 0;
}

decor::decor(double x, double y) : gameObject(x, y) {
    this->x = x;
    this->y = y;
}

void decor::draw() {
    std::cout << "Drawing decor at (" << this->x << ", " << this->y << ")" << std::endl;
}

void decor::update() const {
    std::cout << "Updating decor at (" << this->x << ", " << this->y << ")" << std::endl;
}

