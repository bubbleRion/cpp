#include "list.h"
#include <iostream>

int main(void) {
    List list;
    initList();
    
    insertFirstNode(4);
    printList();
    insertFirstNode(3);
    printList();
    insertFirstNode(1);
    printList();
    insertNode(1 , 2);
    printList();
    
    deleteNode(3);
    printList();
        
    cleanupList();    

    return 0;
}