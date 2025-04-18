#ifndef BOUND_ARRAY_H
#define BOUND_ARRAY_H
#include "safeArray.h"

class BoundArray : public SafeArray{
private:
    int low_;
public:
    explicit BoundArray(int size = SafeArray::getDefaultArraySize() , int low = 0);
    // BoundArray(const int *pArr , int size);
    // BoundArray(const BoundArray& rhs);
    // BoundArray& operator=(const BoundArray& rhs);
    // virtual ~BoundArray();

    // bool operator==(const BoundArray& rhs)const;

    // int& operator[](int index);
    // const int& operator[](int index) const;
};

#endif