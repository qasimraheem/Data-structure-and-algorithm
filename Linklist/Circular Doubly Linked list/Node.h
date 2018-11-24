//
// Created by qasim on 11/24/18.
//

#ifndef CIRCULAR_DOUBLY_LINKED_LIST_NODE_H
#define CIRCULAR_DOUBLY_LINKED_LIST_NODE_H


class Node {
private:
    int data;
    Node *next;
    Node *previous;
public:
    Node();
    Node(int);
    ~Node();

//    getter & setter
    int getData() const;
    void setData(int data);

    Node *getNext() const;
    void setNext(Node *next);

    Node *getPrevious() const;
    void setPrevious(Node *previous);
};


#endif //CIRCULAR_DOUBLY_LINKED_LIST_NODE_H
