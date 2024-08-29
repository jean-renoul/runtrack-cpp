#include "decor.hpp"
#include "character.hpp"
#include "spear.hpp"
#include "bow.hpp"
#include "sword.hpp"
#include <iostream>
#include <memory>

int main() {
    character *a = new character(1, 1, "Bob", 100);
    weapon *b = new spear();

    b->attack(*a);

    return 0;
}