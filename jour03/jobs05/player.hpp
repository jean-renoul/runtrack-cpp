#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <character.hpp>
#include <weapon.hpp>

class player : public character {
    public:
        player(double x, double y, std::string name, int life, weapon* weapon);
        void draw() override;
        void update() override;

    private:
        weapon* weapon;
        
};

#endif