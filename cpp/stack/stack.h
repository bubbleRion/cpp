// #pragma once
#ifndef STACK_H
#define STACK_H
// #define STACKSIZE 100

struct Stack {
//    int array[STACKSIZE];
    //void initStack(int size);
    // void cleanupStack();
private:
    int *pArr;
    int size;
    int tos;
public:
    Stack(int size); // constructor
    ~Stack();
    void push(int data);
    int pop();
};


#endif