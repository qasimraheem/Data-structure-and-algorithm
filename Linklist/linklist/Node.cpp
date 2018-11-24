//
// Created by qasim on 11/13/18.
//

#include "Node.h"

int Node::getData() const {
    return data;
}

void Node::setData(int data) {
    Node::data = data;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

Node::Node() {
    data=0;
    next= nullptr;

}
Node::Node(int data) {
    this->data=data;
    next= nullptr;
}

Node::~Node() {
    next= nullptr;
}
