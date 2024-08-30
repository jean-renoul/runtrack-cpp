#include "Rectangle.hpp"
#include "Circle.hpp"
#include "DrawShape.hpp"
#include "ShapeFactory.hpp"

int main() {
    std::string shapeType = "Rectangle";
    Shape* shape = ShapeFactory::getShape(shapeType);
    drawShape(shape);
    delete shape;

    return 0;
}