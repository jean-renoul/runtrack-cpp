#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Shape.hpp"
#include <iostream>

class Rectangle : public Shape {
    public:
        void draw() const override {
            std::cout << "Rectangle" << std::endl;
        }
};

#endif

