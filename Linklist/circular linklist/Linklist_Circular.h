//
// Created by qasim on 11/23/18.
//

#ifndef CIRCULAR_LINKLIST_LINKLIST_CIRCULAR_H
#define CIRCULAR_LINKLIST_LINKLIST_CIRCULAR_H


#include <iostream>
#include "Node.h"
using namespace std;
class Linklist_Circular {
private:
    Node *head;
    Node *tail;
public:
    Linklist_Circular();
    ~Linklist_Circular();

//  getters and setters
    Node *getHead() const;
    void setHead(Node *head);

    Node *getTail() const;
    void setTail(Node *tail);

//  methods
    bool isEmpty();
    void insertAtTail(int data);
    void insertAtHead(int data);
    void insertBefore(int target,int data);
    void insertAfter(int target,int data);

    Node *search(int data);
    Node *preNodeSearch(int data);
    void deleteNode(int target);
    void print()const;


};



#endif //CIRCULAR_LINKLIST_LINKLIST_CIRCULAR_H
