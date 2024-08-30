#ifndef SHAPEFACTORY_HPP
#define SHAPEFACTORY_HPP
#include "Rectangle.hpp"
#include "Circle.hpp"

template <typename T>
class ShapeFactory {
    public:
        static T* getShape() {
            return new T();
        }
};

#endif