#include "stack.h"
//#include <stdlib.h>
#include <cassert>

Stack::Stack(int size){
    // pArr = (int *)malloc(sizeof(int)*size);
    pArr = new int[size];
    assert(pArr != NULL);//NULl 참이면 뒤에 코드 진행 , 거짓이면 종료.
    size = size;
    tos = 0;
}

//cleanup
Stack::~Stack(){
    // free(pArr);
    delete [] pArr;
}


void Stack::push(int data){
    //full 예외처리
    // if(tos >= STACKSIZE ){
    //     fprintf(stderr, "stack is full.\n");
    //     exit(1);
    // }
    assert(tos != size);

    pArr[tos] = data;
    // *(pArr + tos) = data;
    ++tos;
}

int Stack::pop(){
    //empty 예외처리
    // if (tos <= 0){
    //     fprintf(stderr, "stack is empty.\n");
    //     exit(2);
    // }
    assert(tos != 0);

    --tos;
    return pArr[tos];
}