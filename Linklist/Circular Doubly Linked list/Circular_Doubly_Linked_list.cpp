//
// Created by qasim on 11/24/18.
//

#include "Circular_Doubly_Linked_list.h"

Circular_Doubly_Linked_list::Circular_Doubly_Linked_list() {
    this->head= nullptr;
    this->tail= nullptr;
}

Circular_Doubly_Linked_list::~Circular_Doubly_Linked_list() {
    this->tail= nullptr;
    this->head= nullptr;
}

Node *Circular_Doubly_Linked_list::getHead() const {
    return head;
}

void Circular_Doubly_Linked_list::setHead(Node *head) {
    Circular_Doubly_Linked_list::head = head;
}

Node *Circular_Doubly_Linked_list::getTail() const {
    return tail;
}

void Circular_Doubly_Linked_list::setTail(Node *tail) {
    Circular_Doubly_Linked_list::tail = tail;
}

bool Circular_Doubly_Linked_list::isEmpty() {
    if(this->head== nullptr){
        return true;
    }else{
        return false;
    }
}

void Circular_Doubly_Linked_list::insertAtTail(int data) {
    if(isEmpty()){
        Node *temp=new Node(data);
        this->head=temp;
        this->tail=temp;
        temp->setNext(temp);
        temp->setPrevious(temp);
    }else{
        Node *temp=new Node(data);
        tail->setNext(temp);
        temp->setPrevious(tail);
        this->setTail(temp);
        temp->setNext(head);
        head->setPrevious(temp);

    }
}

void Circular_Doubly_Linked_list::insertAtHead(int data) {
    if(isEmpty()){
        insertAtTail(data);
    }else{
        Node *temp=new Node(data);
        temp->setNext(head);
        head->setPrevious(temp);
        this->setHead(temp);
        temp->setPrevious(tail);
        tail->setNext(temp);
    }
}

void Circular_Doubly_Linked_list::insertBefore(int target, int data) {
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

void Circular_Doubly_Linked_list::insertAfter(int target, int data) {
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

Node *Circular_Doubly_Linked_list::search(int data) {
    Node *temp=head;
    if(temp!= nullptr){
        do{
            if(temp->getData()==data){
                return temp;
            }
            temp=temp->getNext();
        }while(temp!=head);
    }
    return nullptr;
}

void Circular_Doubly_Linked_list::deleteNode(int target) {
    Node *temp=search(target);
    if(temp!= nullptr){
        if(temp==head){
            temp->getNext()->setPrevious(tail);
            tail->setNext(temp->getNext());
            temp->setNext(nullptr);
            temp->setPrevious(nullptr);
            delete temp;
            temp = nullptr;
        }else if(temp==tail){
            temp->getPrevious()->setNext(head);
            head->setPrevious(temp->getPrevious());
            temp->setNext(nullptr);
            temp->setPrevious(nullptr);
            delete temp;
            temp = nullptr;
        }else{
            temp->getNext()->setPrevious(temp->getPrevious());
            temp->getPrevious()->setNext(temp->getNext());
            delete temp;
            temp->setNext(nullptr);
            temp->setPrevious(nullptr);
            temp= nullptr;
        }
    }
}

void Circular_Doubly_Linked_list::print() const {
    Node *temp=head;
    if(temp!= nullptr){
        do{
            cout<<temp->getData()<<endl;
            temp=temp->getNext();
        }while(temp!=head);
    }

}
