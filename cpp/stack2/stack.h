#ifndef STACK_H
#define STACK_H

// extern const int STACK_SIZE;
class Stack{

private:
    static const int STACK_SIZE;

    int *pArr_;
    int size_;
    int tos_;

    Stack(const Stack&); // is not used
    Stack& operator=(const Stack&); // is not used
public:
    // Stack();
    explicit Stack(int size = STACK_SIZE);
    ~Stack();

    int size() const;
    int remain() const;

    bool isEmpty() const;
    bool isFull() const;

    void push(int data);
    int pop();
    

};

#endif