#ifndef QUEUE_H
#define QUEUE_H
#include "array.h"
// extern const int QUEUE_SIZE;

class Queue{

private:
    static const int QUEUE_SIZE;

    // int *pArr_;
    // int size_;
    Array arr_;
    int front_;
    int rear_;

    Queue(const Queue&);
    Queue& operator=(const Queue&);

public:
    // Queue();
    explicit Queue(int size = QUEUE_SIZE);
    ~Queue();

    bool empty() const;
    bool full() const; 

    int size() const;
    int remain() const;

    void push(int data);
    int pop();

};



#endif