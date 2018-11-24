//
// Created by qasim on 11/17/18.
//

#include "Node.h"
Node::Node(int data) {
    this->data=data;
    this->setNext(nullptr);
    this->setPrevious(nullptr);
}

Node::Node() {
    this->data=0;
    this->setNext(nullptr);
    this->setPrevious(nullptr);
}

Node::~Node() {
    this->setNext(nullptr);
    this->setPrevious(nullptr);
}

Node *Node::getPrevious() const {
    return previous;
}

void Node::setPrevious(Node *previous) {
    Node::previous = previous;
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


