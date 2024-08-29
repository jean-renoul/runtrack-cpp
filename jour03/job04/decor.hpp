#ifndef DECOR_HPP
#define DECOR_HPP
#include "gameObject.hpp"

class decor : public gameObject {
    public:
        decor();
        decor(double x, double y);
        void draw() override;
        void update() const override;
};

#endif