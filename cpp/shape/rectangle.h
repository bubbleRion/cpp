#ifndef RECTANCLE_H
#define RECTANCLE_H
#include "shape.h"

class Rectangle : public Shape {
    int width_;
    int height_;
public:
    Rectangle(int x, int y , int w, int h);
    virtual ~Rectangle() { }
    // Rectangle(const Rectangle& rhs) { /* memberwuse copy */}

    virtual double area() const;
    double getDiagonal() const;
};

#endif