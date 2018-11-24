//
// Created by qasim on 11/17/18.
//

#ifndef INC_2D_LINKLIST_NODE_H
#define INC_2D_LINKLIST_NODE_H


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


#endif //INC_2D_LINKLIST_NODE_H
