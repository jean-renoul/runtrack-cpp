#include "vector2d.hpp"
#include <iostream>
#include <cmath>

vector2d::vector2d() {
    this->x = 0;
    this->y = 0;
}

vector2d::vector2d(double x, double y) {
    this->x = x;
    this->y = y;
}

double vector2d::getX() const {
    return this->x;
}

double vector2d::getY() const {
    return this->y;
}

void vector2d::setX(double x) {
    this->x = x;
}

void vector2d::setY(double y) {
    this->y = y;
}

vector2d vector2d::operator+(const vector2d &v) {
    vector2d result;
    result.setX(this->x + v.getX());
    result.setY(this->y + v.getY());
    return result;
}

vector2d vector2d::operator-(const vector2d &v) {
    vector2d result;
    result.setX(this->x - v.getX());
    result.setY(this->y - v.getY());
    return result;
}

double vector2d::distance(const vector2d &v) {
    double dx = this->x - v.getX();
    double dy = this->y - v.getY();
    return sqrt(dx * dx + dy * dy);
}