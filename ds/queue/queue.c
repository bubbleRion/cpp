#include <stdio.h>

int queue[100];
int rear;
int front;

void push(int data)
{
    queue[rear] = data;
    ++rear;
}

int pop(void)
{
    int index = front;
    ++front;
    return queue[index];
}

int main(void)
{
    push(100);
    push(200);
    push(300);

    printf("lst pop() : %d\n" , pop());
    printf("2nd pop() : %d\n" , pop());
    printf("3rd pop() : %d\n" , pop());

    return 0;
}

//queue는 버퍼링이 된다.
