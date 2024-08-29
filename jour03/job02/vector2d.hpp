#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

class vector2d {
    protected:
        double x;
        double y;

    public:
        vector2d();
        vector2d(double x, double y);
        double getX() const;
        double getY() const;
        void setX(double x);
        void setY(double y);
        vector2d operator+(const vector2d &v);
        vector2d operator-(const vector2d &v);
        double distance(const vector2d &v);
};

#endif