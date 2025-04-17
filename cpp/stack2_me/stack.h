#ifndef STACK_H
#define STACK_H


class Stack{
// friend std::ostream& operator<<(std::ostream& out , const Stack& rhs);
private:
    int *pArr_;
    int size_;
    int tos_;
public:
    Stack(int size);
    ~Stack();
    void push(int data);
    int pop();
    // Stack& operator=(const Stack& rhs);
    // X Array() { }
    // X Array(const Array&) { /* memeberwise copy */ }
    // X ~Array() { }
    // X Array& operator=(const Array&) { /*memeberwise copy */ return *this}
    // Array *operator() { return this; }
    // const Array*operator&() const {return this;}
};

#endif