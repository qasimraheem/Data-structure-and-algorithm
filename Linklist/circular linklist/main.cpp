#include <iostream>
#include "Linklist_Circular.h"
int main() {
    Linklist_Circular lc;
    lc.print();
    lc.insertAtTail(3);
    lc.print();
    lc.insertAtHead(2);
    lc.insertAtTail(7);
    lc.insertBefore(3,2);
    lc.deleteNode(2);
    lc.insertAtTail(8);
    lc.print();
    return 0;
}