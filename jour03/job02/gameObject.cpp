#include "gameObject.hpp"

gameObject::gameObject() {
    this->x = 0;
    this->y = 0;
}

gameObject::gameObject(double x, double y) : vector2d(x, y) {
    this->x = x;
    this->y = y;
}
