//
// Created by qasim on 11/17/18.
//

#ifndef INC_2D_LINKLIST_LINKLIST_H
#define INC_2D_LINKLIST_LINKLIST_H

#include <iostream>
#include "Node.h"
using namespace std;
class Linklist {
private:
    Node *head;
    Node *tail;
public:
    Linklist();
    ~Linklist();

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


#endif //INC_2D_LINKLIST_LINKLIST_H
