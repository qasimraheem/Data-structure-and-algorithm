//
// Created by qasim on 11/24/18.
//

#ifndef CIRCULAR_DOUBLY_LINKED_LIST_CIRCULAR_DOUBLY_LINKED_LIST_H
#define CIRCULAR_DOUBLY_LINKED_LIST_CIRCULAR_DOUBLY_LINKED_LIST_H


#include <iostream>
#include "Node.h"
using namespace std;
class Circular_Doubly_Linked_list {
private:
    Node *head;
    Node *tail;
public:
    Circular_Doubly_Linked_list();
    ~Circular_Doubly_Linked_list();

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
    void deleteNode(int target);
    void print()const;

};


#endif //CIRCULAR_DOUBLY_LINKED_LIST_CIRCULAR_DOUBLY_LINKED_LIST_H
