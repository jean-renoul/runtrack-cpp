#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "gameObject.hpp"
#include <string>

class character : public gameObject {
    public:
        character();
        character(double x, double y, std::string name, int life);
        void draw() override;
        void update() override;
        void isAlive();
        void takeDamage(int damage);

    private:
        std::string name;
        int life;

};

#endif