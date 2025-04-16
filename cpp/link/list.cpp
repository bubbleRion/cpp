
#include "list.h"
#include <stdlib.h>
#include <cassert>
#include <iostream>


Node *createNode(int data , Node *next){
    Node *p = new Node[sizeof(Node)];
    assert(p);
    p->data = data;
    p->next = next;

    return p;
}

List::List(){
    // List * p = new List[0];
    List * p = new List[sizeof(List)];
    assert(ptr);
    p->ptr = NULL;
}

List::~List(){
    Node *ptr = this->ptr;
    while (ptr){
        Node *tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
}

void List::insertFirstNode(int data){
    Node *tmp = new Node;
    // Node * ptr = new Node[sizeof(Node)];
    assert(tmp);
    tmp->data = data;
    tmp->next = ptr->next;
    ptr->next = tmp;
    // this->ptr->next = createNode(data, this->ptr->next);
}

void List::insertNode(int prevData, int data){
    Node *ptr = ptr->next;
    while (ptr){
        if (ptr->data == prevData){
            break;
        }
        ptr = ptr->next;
    }
    if (ptr){
        Node *tmp = new Node;
        assert(tmp);
        tmp->data = data;
        tmp->next = ptr->next;
        ptr->next = tmp;
        // p->next = createNode(data , p->next);
    }
}

void List::deleteNode(int data){
    Node *ptr = ptr->next;
    Node *ptr2 = ptr;
    while (ptr){
        if (ptr->data == data){
            break;
        }
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }
    if (ptr){
        ptr2->next = ptr->next;
        free(ptr);
    }
}

void List::printList(){
    Node *ptr = ptr->next;
    printf("[");
    while (ptr){
        std::cout <<  ptr->data << std::endl;
        std::cout <<  (ptr->next  ? ", " : "") << std::endl;
        ptr = ptr->next;
    }
    printf("]\n");
}

