#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "character.hpp"

class weapon {
    public:
        weapon();
        virtual void attack(character &c) = 0;

    protected:
        int damage;
        int range;
};

#endif
        