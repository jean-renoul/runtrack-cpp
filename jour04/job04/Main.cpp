#include "Rectangle.hpp"
#include "Circle.hpp"
#include "DrawShape.hpp"

int main() {
    Circle circle;
    Rectangle rectangle;

    Circle* circlePtr = &circle;
    Rectangle* rectanglePtr = &rectangle;

    drawShape(circlePtr);
    drawShape(rectanglePtr);

    return 0;
}