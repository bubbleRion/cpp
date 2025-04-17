#include <cassert>
#include <iostream>
#include "stack.h"

// std::ostream& operator<<(std::ostream& out , const Stack& rhs)
// {
//     return out << "s1 1st pop() : " << rhs.pArr_ << "boom";
// }

Stack::Stack(int size){
    // pArr = (int *)malloc(sizeof(int)*size);
    pArr_ = new int[size];
    assert(pArr_ != NULL);//NULl 참이면 뒤에 코드 진행 , 거짓이면 종료.
    size_ = size;
    tos_ = 0;
};

Stack::~Stack(){
    delete [] pArr_;
}

void Stack::push(int data){
    assert(tos_ != size_);

    pArr_[tos_] = data;
    // *(pArr + tos) = data;
    ++tos_;
}

int Stack::pop(){
    //empty 예외처리
    // if (tos <= 0){
    //     fprintf(stderr, "stack is empty.\n");
    //     exit(2);
    // }
    assert(tos_ != 0);

    --tos_;
    return pArr_[tos_];
}

// Stack& Stack::operator=(const Stack& rhs)
// {
    
//     return *this;
// }