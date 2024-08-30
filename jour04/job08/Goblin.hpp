#ifndef GOBLIN_HPP
#define GOBLIN_HPP
#include "Ennemy.hpp"

class Goblin : public Ennemy {
    public:
        void attack() override;
};

#endif