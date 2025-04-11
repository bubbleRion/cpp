#ifndef LIST_H
#define LIST_H

struct Node{
    int data;
    struct Node *next;
};

struct List : Node{

private:
    Node *ptr;
public:
    List();
    ~List();

    void insertFirstNode( int data);
    void insertNode( int prevData, int data);
    void deleteNode( int data);

    void printList();
};



#endif