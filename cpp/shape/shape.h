#ifndef SHAPE_H
#define SHAPE_H

class Shape{ // 추상 기저 클래스 or 추상 클래스
protected:
// private:
    int x_;
    int y_;

public:
    Shape();
    Shape(int x , int y);
    // Shape(const Shape& rhs) { /* memberwuse copy */}
    virtual ~Shape() { }
    // Shape& operator=(const Shape&) { /* memberwise copy */ return *this; }
    void move(int x , int y);
    virtual double area() const = 0; // 구현할 수 없다. --> pure virtual func.

};

#endif