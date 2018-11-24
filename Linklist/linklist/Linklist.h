//
// Created by qasim on 11/13/18.
//

#ifndef LINKLIST_LINKLIST_H
#define LINKLIST_LINKLIST_H

#include <iostream>
#include "Node.h"
class Linklist {
private:
    Node *head;
    Node *tail;
public:
    Linklist();
    ~Linklist();

    //methods
    bool isEmpty();
    void insertAtTail(int data);
    void insertAtHead(int data);
    Node *search(int data);
    Node *preNodeSearch(int data);
    void insertBefore(int target,int data);
    void insertAfter(int target,int data);
    void deleteNode(int target);

    //getter & setter
    Node *getHead() const;
    void setHead(Node *head);

    Node *getTail() const;
    void setTail(Node *tail);

};


#endif //LINKLIST_LINKLIST_H
