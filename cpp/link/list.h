#ifndef LIST_H
#define LIST_H

struct Node{
    int data;
    struct Node *next;
};

struct List{

public:
    
    Node *ptr;

    List();
    ~List();

    void insertFirstNode(int data);
    void insertNode( int prevData, int data);
    void deleteNode( int data);

    void printList();
};



#endif