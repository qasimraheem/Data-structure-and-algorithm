#include <iostream>
#include "Linklist.h"

using namespace std;
int main() {
    Linklist list1;
    list1.insertAtTail(3);
    list1.insertAtTail(4);
    list1.insertAtHead(2);
    list1.insertAfter(4,5);
    list1.insertBefore(7,1);
    list1.deleteNode(2);
    for(Node *i=list1.getHead();i!= nullptr;i=i->getNext()){
        cout<<i->getData()<<endl;
    }
    return 0;
}