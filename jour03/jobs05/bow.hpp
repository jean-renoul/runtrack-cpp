#ifndef BOW_HPP
#define BOW_HPP
#include "weapon.hpp"
#include <iostream>

class bow : public weapon {
    public:
        bow();
        void attack(character &c) override;
};

#endif