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