//
// Created by qasim on 11/13/18.
//

#include "Linklist.h"


Linklist::Linklist() {
    head= nullptr;
    tail= nullptr;
}

Linklist::~Linklist() {
    delete head;
    delete tail;

}

Node *Linklist::getHead() const {
    return head;
}

void Linklist::setHead(Node *head) {
    Linklist::head = head;
}

Node *Linklist::getTail() const {
    return tail;
}

void Linklist::setTail(Node *tail) {
    Linklist::tail = tail;
}


bool Linklist::isEmpty() {
    if(head == nullptr){
        return true;
    }else{
        return false;
    }
}

void Linklist::insertAtTail(int data) {
    if(this->isEmpty()){
        Node *temp=new Node(data);
        head=temp;
        tail=temp;
    }else{
        Node *temp=new Node(data);
        tail->setNext(temp);
        tail=temp;
    }
}
void Linklist::insertAtHead(int data) {
    if(this->isEmpty()){
        insertAtTail(data);
    }else{
        Node *temp=new Node(data);
        temp->setNext(head);
        head=temp;
    }
}


Node *Linklist::search(int data) {
    for(Node *i=this->getHead();i!= nullptr;i=i->getNext()){
        if(i->getData()==data){
            return i;
        }
    }
    return nullptr;
}

void Linklist::insertAfter(int target,int data) {
    Node * temp=search(target);
    if(temp!= nullptr){
        if(temp==tail){
            insertAtTail(data);
        }else{
            Node *newNode=new Node(data);
            newNode->setNext(temp->getNext());
            temp->setNext(newNode);
        }

    }

}
void Linklist::insertBefore(int target,int data) {
    Node * preTemp;
    Node * temp=search(target);
    preTemp=preNodeSearch(target);
    if(preTemp==nullptr&&temp==head){
        insertAtHead(data);
    }else if(preTemp!=nullptr&&temp!= nullptr){
        std::cout<<preTemp;
        Node *newNode=new Node(data);
        newNode->setNext(preTemp->getNext());
        preTemp->setNext(newNode);
    }else{}

}

Node *Linklist::preNodeSearch(int data) {
    Node *preNode= nullptr;
    for(Node *i=this->getHead();i!= nullptr;i=i->getNext()){
        if(i->getData()==data){
            return preNode;
        } else{
            preNode=i;
        }
    }
    return nullptr;
}

void Linklist::deleteNode(int target) {
    Node *preNode=preNodeSearch(target);
    Node *temp=search(target);
    if(temp!= nullptr){
        if(temp==head){
            this->setHead(temp->getNext());
//            temp->setNext(nullptr);

            delete temp;
        }else if(temp==tail){
            preNode->setNext(nullptr);
            this->setTail(preNode);
            temp->setNext(nullptr);
            delete temp;
        }else{
            preNode->setNext(temp->getNext());
            temp->setNext(nullptr);
            delete temp;
        }
    }

}
