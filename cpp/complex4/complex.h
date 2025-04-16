#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex{
    friend std::ostream& operator<<(std::ostream& out , const Complex& rhs);
private:
    double re_; // real part
    double im_; // imaginary part
public:
    Complex(double re = 0.0 , double im = 0.0); // constructor
    // ~Complex(); // destructor
    // Complex(const Complex& rhs) { /* memberwise copy */}

    // Complex& operator=(const Complex& rhs) { /*memberwise copy return *this; */}
    Complex& operator+=(const Complex& rhs);
    // += , -= , *= , /=, O
    // %= , &= , |= , ^=  X
    bool operator==(const Complex& rhs) const;
    bool operator!=(const Complex& rhs) const;
    // != , > , < , >= , <= O
    const Complex operator+(const Complex& rhs) const;
    const Complex operator-(const Complex& rhs) const;
    
    Complex& operator++(); // prefix
    Complex operator++(int ); // postfix

    // ++ , -- X

    // & , | , ~ , ^ X
    // type casting X

    // Complex* operator&() { return this;}
    // const Complex * operator&() const { return this; }

    double real() const;
    double imag() const;
    void real(double re);
    void imag(double im);



};
#endif