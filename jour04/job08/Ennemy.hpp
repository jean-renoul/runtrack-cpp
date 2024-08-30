#ifndef ENNEMY_HPP
#define ENNEMY_HPP

class Ennemy {
    public:
        virtual void attack() = 0;
        virtual ~Ennemy() = default;
};

#endif