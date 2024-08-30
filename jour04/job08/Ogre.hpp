#ifndef OGRE_HPP
#define OGRE_HPP
#include "Ennemy.hpp"

class Ogre : public Ennemy {
    public:
        void attack() override;
};

#endif