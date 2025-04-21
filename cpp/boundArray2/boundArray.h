#ifndef BOUND_ARRAY_H
#define BOUND_ARRAY_H
#include "safeArray.h"
template <typename T>
class BoundArray : public SafeArray{
private:
    T low_;
public:
    explicit BoundArray(int size = Array::getDefaultArraySize());
    BoundArray(T low , int upper);
    BoundArray(const BoundArray<T>& rhs);
    virtual ~BoundArray();

    BoundArray<T>& operator=(const BoundArray<T>& rhs);
    
    bool operator==(const BoundArray<T>& rhs) const;

    int& operator[](int index);
    const int& operator[](int index) const;

    int lower() const;
    int upper() const;
    
};

template <typename T>
BoundArray<T>::BoundArray(int size)
: SafeArray(size)
{

}

template <typename T>
BoundArray<T>::BoundArray(T low , int upper)
: SafeArray(upper - low) , low_(low)
{

}

template <typename T>
BoundArray<T>::BoundArray(const BoundArray<T>& rhs)
: SafeArray((SafeArray)rhs) , low_(rhs.low_)
{

}

template <typename T>
BoundArray<T>::~BoundArray()
{

}

template <typename T>
BoundArray<T>& BoundArray<T>::operator=(const BoundArray<T>& rhs)
{
    if(this != &rhs){
        this->SafeArray::operator=((SafeArray)rhs);
        low_ = rhs.low_;
    }
    return *this;
}

template <typename T>
bool BoundArray<T>::operator==(const BoundArray<T>& rhs) const
{
    return low_ == rhs.low_ && this->SafeArray::operator==((SafeArray)rhs);
}

template <typename T>
int& BoundArray<T>::operator[](int index)
{
    return this->SafeArray::operator[](index - low_);
}

template <typename T>
const int& BoundArray<T>::operator[](int index) const
{
    return this->SafeArray::operator[](index - low_);
}

template <typename T>
int BoundArray<T>::lower() const
{
    return low_;
}

template <typename T>
int BoundArray<T>::upper() const
{
    return low_ + this->Array::getDefaultArraySize();
}

#endif