#include "player.hpp"
#include <iostream>

player::player(double x, double y, std::string name, int life, weapon weapon) : character(x, y, name, life) {
    this->weapon = weapon;
}