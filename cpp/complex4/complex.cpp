#include "complex.h"

std::ostream& operator<<(std::ostream& out , const Complex& rhs)
{
    return out << "(" << rhs.re_<< ", " << rhs.im_ << "i)";
}

Complex::Complex(double re , double im)
{
    re_ = re;
    im_ = im;
}

bool Complex::operator==(const Complex& rhs)
{
    return re_ == rhs.re_ && im_ == rhs.im_;
}

bool Complex::operator!=(const Complex& rhs)
{
    return !this->operator==(rhs);
    // return !(re_ == rhs.re_ && im_ == rhs.im_);
}

const Complex Complex::operator+(const Complex& rhs)
{
    Complex result(re_ + rhs.re_ , im_ + rhs.im_);

    return result;
}

const Complex Complex::operator-(const Complex& rhs)
{
    Complex result(re_ - rhs.re_ , im_ - rhs.im_);

    return result;
}

Complex& Complex::operator+=(const Complex& rhs)
{
    re_ += rhs.re_;
    im_ += rhs.im_;
    return *this;
}

Complex& Complex::operator++()
{
    re_ += 1.0;
    return *this;
}

Complex Complex::operator++(int )
{
    Complex tmp = *this;
    re_ += 1.0;

    return tmp;
}
