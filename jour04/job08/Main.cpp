#include "EnnemyFactory.hpp"
#include <iostream>
#include <memory>

int main() {
    EnnemyFactory factory = EnnemyFactory();

    Ennemy* e1 = factory.createEnnemy("Goblin");
    e1->attack();

    return 0;
}
    