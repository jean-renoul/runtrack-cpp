#include "Rectangle.hpp"
#include "Circle.hpp"
#include "DrawShape.hpp"
#include "ShapeFactory.hpp"

int main() {

    Rectangle* rec = ShapeFactory<Rectangle>::getShape();
    rec->draw();

    Circle* cir = ShapeFactory<Circle>::getShape();
    cir->draw();
    
    

    return 0;
}