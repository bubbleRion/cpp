
#include "list.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>

void initList(List *pList , int eleSize){
    // pList->ptr = malloc(sizeof(Node));
    pList->ptr = malloc(sizeof(Node)); // dummy Node
    assert(pList->ptr);
    pList->ptr->next = NULL;
    pList->eleSize = eleSize;
}

void cleanupList(List *pList){
    Node *ptr = pList->ptr;
    while (ptr){
        Node *tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
}

void printList(const List *pList , void (*print)(const void *) ){
    Node *p = pList->ptr->next;
    printf("[");
    while (p){
        // printf("%d", ptr->data);
        printf(p + 1);
        printf((p->next ) ? ", " : "");
        p = p->next;
    }
    printf("]\n");
}

void insertFirstNode(List *pList , const void *pData){
    // Node *tmp = malloc(sizeof(Node));
    Node *p = malloc(sizeof(Node) + pList->eleSize);
    // assert(p);
    // p->data = data;
    // memcpy((unsigned char *)p + sizeof(Node), pData , pList->eleSize);
    memcpy(p + 1, pData , pList->eleSize);
    p->next = pList->ptr->next;
    pList->ptr->next = p;
}

void insertNode(List *pList, const void *pPrevData, const void *pData){
    Node *p = pList->ptr->next;
    while (p){
        //if (p->data == prevData){
        if(memcmp(p + 1 , pPrevData , pList->eleSize) == 0)
        {
            break;
        }
        p = p->next;
    }
    if (p){
        // Node *tmp = malloc(sizeof(Node));
        Node *tmp = malloc(sizeof(Node) + pList->eleSize);
        assert(tmp);
        // tmp->data = data;
        memcpy(tmp + 1 , pData , pList->eleSize);
        tmp->next = p->next;
        p->next = tmp;
    }
}

void deleteNode(List *pList, const void *pData){
    Node *p = pList->ptr->next;
    Node *p2 = pList->ptr;
    while (p){
        // if (p->data == data){
        if (memcmp(p + 1, pData , pList->eleSize) == 0){
            break;
        }
        p = p->next;
        p2 = p2->next;
    }
    if (p){
        p2->next = p->next;
        free(p);
    }
}
