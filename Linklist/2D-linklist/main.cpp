#include <iostream>
#include "Linklist.h"
using namespace std;

int main() {
    Linklist l;
    l.print();
    l.insertAtHead(2);
    l.insertAtTail(5);
    l.insertBefore(5,4);
    l.insertAfter(5,6);
    l.insertBefore(3,3);
    l.insertBefore(2,1);
    l.deleteNode(4);
    l.print();

    return 0;
}