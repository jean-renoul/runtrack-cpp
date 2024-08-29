#include "vector2d.hpp"
#include <iostream>
#include <memory>

int main() {
    vector2d v1 = vector2d(1, 2);
    vector2d v2 = vector2d(3, 4);
    vector2d v3 = v1 + v2;
    vector2d v4 = v1 - v2;
    std::cout << "v1: (" << v1.getX() << ", " << v1.getY() << ")" << std::endl;
    std::cout << "v2: (" << v2.getX() << ", " << v2.getY() << ")" << std::endl;
    std::cout << "v3: (" << v3.getX() << ", " << v3.getY() << ")" << std::endl;
    std::cout << "v4: (" << v4.getX() << ", " << v4.getY() << ")" << std::endl;

    std::cout << "Distance entre v1 et v2: " << v1.distance(v2) << std::endl;

    return 0;
    
}