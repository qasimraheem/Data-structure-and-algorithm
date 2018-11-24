#include <iostream>
#include "Circular_Doubly_Linked_list.h"
using namespace std;

int main() {
    Circular_Doubly_Linked_list cdl;
    cdl.insertAtHead(3);
    cdl.insertAtTail(4);
    cdl.insertAfter(3,7);
    cdl.insertAfter(4,5);
    cdl.insertBefore(3,2);
    cdl.insertBefore(5,6);
    cdl.deleteNode(6);
    cdl.deleteNode(7);
    cdl.print();
    return 0;
}