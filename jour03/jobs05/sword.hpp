#ifndef SWORD_HPP
#define SWORD_HPP
#include "weapon.hpp"
#include <iostream>

class sword : public weapon {
    public:
        sword();
        void attack(character &c) override;
};

#endif