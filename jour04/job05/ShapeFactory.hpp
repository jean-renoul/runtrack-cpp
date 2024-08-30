#ifndef SHAPEFACTORY_HPP
#define SHAPEFACTORY_HPP
#include "Rectangle.hpp"
#include "Circle.hpp"

class ShapeFactory {
    public:
        static Shape* getShape(const std::string& shapeType) {
            if (shapeType == "Rectangle") {
                return new Rectangle();
            } else if (shapeType == "Circle") {
                return new Circle();
            } else {
                return nullptr;
            }
        }
};

#endif