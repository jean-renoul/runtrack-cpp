#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "Shape.hpp"
#include <iostream>

class Circle : public Shape {
    public:
        void draw() const override {
            std::cout << "Circle" << std::endl;
        }
};

#endif