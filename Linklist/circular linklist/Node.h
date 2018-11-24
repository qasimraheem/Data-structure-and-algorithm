//
// Created by qasim on 11/23/18.
//

#ifndef CIRCULAR_LINKLIST_NODE_H
#define CIRCULAR_LINKLIST_NODE_H


class Node {
private:
    int data;
    Node *next;
public:
    Node();
    Node(int);
    ~Node();

//    getter & setter
    int getData() const;
    void setData(int data);

    Node *getNext() const;
    void setNext(Node *next);

};



#endif //CIRCULAR_LINKLIST_NODE_H
