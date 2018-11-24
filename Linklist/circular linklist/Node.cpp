//
// Created by qasim on 11/23/18.
//


#include "Node.h"
Node::Node(int data) {
    this->data=data;
    this->setNext(nullptr);

}

Node::Node() {
    this->data=0;
    this->setNext(nullptr);
}

Node::~Node() {
    this->setNext(nullptr);
}


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
