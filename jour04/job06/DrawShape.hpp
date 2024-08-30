#ifndef DRAW_SHAPE_HPP
#define DRAW_SHAPE_HPP
#include "Shape.hpp"

template <typename T>
void drawShape(const T* shape) {
    shape->draw();
}

#endif