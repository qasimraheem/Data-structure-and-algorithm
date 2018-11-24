//
// Created by qasim on 11/23/18.
//

#include "Linklist_Circular.h"

Linklist_Circular::Linklist_Circular() {
    this->head= nullptr;
    this->tail= nullptr;
}

Linklist_Circular::~Linklist_Circular() {
    this->tail= nullptr;
    this->head= nullptr;
}

Node *Linklist_Circular::getHead() const {
    return head;
}

void Linklist_Circular::setHead(Node *head) {
    Linklist_Circular::head = head;
}

Node *Linklist_Circular::getTail() const {
    return tail;
}

void Linklist_Circular::setTail(Node *tail) {
    Linklist_Circular::tail = tail;
}

bool Linklist_Circular::isEmpty() {
    if(this->head== nullptr){
        return true;
    }else{
        return false;
    }
}

void Linklist_Circular::insertAtTail(int data) {
    if(isEmpty()){
        Node *temp=new Node(data);
        this->head=temp;
        this->tail=temp;
        temp->setNext(temp);
    }else{
        Node *temp=new Node(data);
        tail->setNext(temp);
        temp->setNext(head);
        this->setTail(temp);
    }
}

void Linklist_Circular::insertAtHead(int data) {
    if(isEmpty()){
        insertAtTail(data);
    }else{
        Node *temp=new Node(data);
        temp->setNext(head);
        this->setHead(temp);
        tail->setNext(temp);
    }
}

void Linklist_Circular::insertBefore(int target, int data) {
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

void Linklist_Circular::insertAfter(int target, int data) {
    Node *temp=search(target);
    if(temp!= nullptr){
        if(temp==tail){
            insertAtTail(data);
        }
        else{
            Node *newNode=new Node(data);
            newNode->setNext(temp->getNext());
            temp->setNext(newNode);

        }
    }
}

Node *Linklist_Circular::search(int data) {
    Node *temp=head;
    if(temp!= nullptr){
        do{
            if(temp->getData()==data){
                return temp;
            }
        }while(temp!=head);
    }
    return nullptr;
}

Node *Linklist_Circular::preNodeSearch(int data) {
    Node *preNode= nullptr;
    Node *temp=head;
    if(temp!= nullptr){
    do{
        if(temp->getData()==data){
            return preNode;
        } else{
            preNode=temp;
        }
    }while(temp!=head);
    }
    return nullptr;
}

void Linklist_Circular::deleteNode(int target) {
    Node *preNode=preNodeSearch(target);
    Node *temp=search(target);
    if(temp!= nullptr){
        if(temp==head){
            this->setHead(temp->getNext());
            tail->setNext(head);
            delete temp;
        }else if(temp==tail){
            preNode->setNext(nullptr);
            this->setTail(preNode);
            temp->setNext(nullptr);
            preNode->setNext(head);
            delete temp;
        }else{
            preNode->setNext(temp->getNext());
            temp->setNext(nullptr);
            delete temp;
        }
    }

}

void Linklist_Circular::print() const {
    Node *temp=head;
    if(temp!= nullptr){
        do{
            cout<<temp->getData()<<endl;
            temp=temp->getNext();
        }while(temp!=head);
    }
}
