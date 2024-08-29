#include "decor.hpp"
#include "character.hpp"
#include <iostream>
#include <memory>

int main() {
    decor d = decor(1, 2);
    d.draw();
    d.update();

    character c = character(3, 4, "Bob", 100);
    c.draw();
    c.update();


    return 0;
}