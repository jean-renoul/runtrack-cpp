#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP
#include "vector2d.hpp"

class gameObject : public vector2d {
    public:
        gameObject();
        gameObject(double x, double y);
        virtual void draw() = 0;
        virtual void update() = 0;
};

#endif