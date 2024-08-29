#ifndef SPEAR_HPP
#define SPEAR_HPP
#include "weapon.hpp"
#include <iostream>

class spear : public weapon {
    public:
        spear();
        void attack(character &c) override;
};

#endif