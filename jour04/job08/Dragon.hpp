#ifndef DRAGON_HPP
#define DRAGON_HPP
#include "Ennemy.hpp"

class Dragon : public Ennemy {
    public:
        void attack() override;
};

#endif