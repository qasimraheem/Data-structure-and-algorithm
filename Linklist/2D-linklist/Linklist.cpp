//
// Created by qasim on 11/17/18.
//

#include "Linklist.h"

Linklist::Linklist() {
    this->head= nullptr;
    this->tail= nullptr;
}

Linklist::~Linklist() {
    this->tail= nullptr;
    this->head= nullptr;
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
    if(this->head== nullptr){
        return true;
    }else{
        return false;
    }
}

void Linklist::insertAtTail(int data) {
    if(isEmpty()){
        Node *temp=new Node(data);
        this->head=temp;
        this->tail=temp;
    }else{
        Node *temp=new Node(data);
        temp->setPrevious(tail);
        this->tail->setNext(temp);
        this->tail=temp;
    }
}

void Linklist::insertAtHead(int data) {
    if(isEmpty()){
        insertAtTail(data);
    }else{
        Node *temp=new Node(data);
        temp->setNext(head);
        this->head->setPrevious(temp);
        this->head=temp;
    }
}

void Linklist::insertBefore(int target, int data) {
    Node *temp=search(target);
    if(temp!= nullptr){
        if(temp==head){
            insertAtHead(data);
        }
        else{
            Node *newNode=new Node(data);
            temp->getPrevious()->setNext(newNode);
            newNode->setPrevious(temp->getPrevious());
            newNode->setNext(temp);
            temp->setPrevious(newNode);
        }
    }
}

void Linklist::insertAfter(int target, int data) {
    Node *temp=search(target);
    if(temp!= nullptr){
        if(temp==tail){
            insertAtTail(data);
        }
        else{
            Node *newNode=new Node(data);
            newNode->setNext(temp->getNext());
            temp->getNext()->setPrevious(newNode);
            temp->setNext(newNode);
            newNode->setPrevious(temp);
        }
    }
}

Node *Linklist::search(int data) {
    for(Node *temp=head;temp!= nullptr;temp=temp->getNext()){
        if(temp->getData()==data){
            return temp;
        }
    }
    return nullptr;
}

void Linklist::deleteNode(int target) {
    Node *temp=search(target);
    if(temp!= nullptr){
     if(temp==head){
         temp->getNext()->setPrevious(nullptr);
         head=temp->getNext();
         delete temp;
         temp= nullptr;
     }else if(temp==tail){
         temp->getPrevious()->setNext(nullptr);
         tail=temp->getPrevious();
         delete temp;
         temp = nullptr;
     }else{
         temp->getPrevious()->setNext(temp->getNext());
         temp->getNext()->setPrevious(temp->getPrevious());
         delete temp;
         temp= nullptr;
     }
    }
}

void Linklist::print() const {
    for(Node *i=this->head;i!=nullptr;i=i->getNext()){
        cout<<i->getData()<<endl;
    }

}
