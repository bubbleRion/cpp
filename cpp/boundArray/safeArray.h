#ifndef SAFE_ARRAY_H
#define SAFE_ARRAY_H
#include "array.h"

class SafeArray : public Array{
private:
    
public:
    explicit SafeArray(int size = Array::getDefaultArraySize());
    SafeArray(const int *pArr , int size);
    SafeArray(const SafeArray& rhs);
    virtual ~SafeArray();
    SafeArray& operator=(const SafeArray& rhs);

    bool operator==(const SafeArray& rhs)const;

    int& operator[](int index);
    const int& operator[](int index) const;
};

#endif