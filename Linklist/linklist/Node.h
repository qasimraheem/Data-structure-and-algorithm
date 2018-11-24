//
// Created by qasim on 11/13/18.
//

#ifndef LINKLIST_NODE_H
#define LINKLIST_NODE_H


class Node {
private:
    int data;
    Node *next;

public:
    Node();
    Node(int);
    ~Node();
    int getData() const;

    void setData(int data);

    Node *getNext() const;

    void setNext(Node *next);
};


#endif //LINKLIST_NODE_H
