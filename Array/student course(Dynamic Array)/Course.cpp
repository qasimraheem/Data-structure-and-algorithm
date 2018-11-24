//
// Created by qasim on 11/6/18.
//

#include "Course.h"

//constructors
Course::Course():Course(0,"",5){

}
Course::Course(int id,string name):Course(id,name,5){

}
Course::Course(int id, string name, int capcity){
    this->id=id;
    this->name=name;
    this->capacity=capcity;
    this->used=0;
    student =new Student[capacity];
}

//getters & setters
const string &Course::getName() const {
    return name;
}
void Course::setName(const string &name) {
    Course::name = name;
}
int Course::getCapacity() const {
    return capacity;
}
void Course::setCapacity(int capacity) {
    Course::capacity = capacity;
}
int Course::getUsed() const {
    return used;
}
void Course::setUsed(int used) {
    Course::used = used;
}
Student *Course::getStudent() const {
    return student;
}
void Course::setStudent(Student *student) {
    Course::student = student;
}

Student *Course::getStudent1(int i) {
    return &student[i];
}
int Course::getId() const {
    return id;
}

void Course::setId(int id) {
    Course::id = id;
}


//members functions
void Course::resize() {
    capacity+=5;
    Student *temp=new Student[capacity];
    for(int i=0;i<used;i++){
        temp[i]=student[i];
    }
    delete[] student;
    student=temp;

}

void Course::enroll(Student s) {
    if(used==capacity){
        resize();
        this->student[used]=s;
        used++;
    }else{
        this->student[used]=s;
        used++;
    }
}

void Course::drop(Student s) {
    for(int i=0;i<used;i++){
        if(student[i].getCms()==s.getCms()){
            student[i].setCms(0);
            student[i].setName("");
            saveMemory(i);
            used--;
            break;
        }
    }
}

void Course::print() {
    cout<<"\n\nCourse id:"<<Course::id;
    cout<<"\nCourse name:"<<Course::getName();
    cout<<"\nCourse cpacity:"<<Course::getCapacity();
    cout<<"\nCourse used:"<<Course::getUsed();

    for(int i=0;i<used;i++){
        cout<<"\nStudent at index "<<i<<" :"<<Course::getStudent1(i)->getCms()<<Course::getStudent1(i)->getName();
    }
}

void Course::saveMemory(int i) {
    for(int j=i;j<used;j++){
        student[j].setCms(student[j+1].getCms());
        student[j].setName(student[j+1].getName());

//        if(j==used){
//            student[i].setCms(0);
//            student[i].setName("");
//        }
    }
}

int Course::search(int cms) {
    for(int i=0;i<used;i++){
        if(cms==student[i].getCms()){
            return i;
        }
    }
    cout<<"STUDENT NOT FOUND!";
    return -1;
}

void Course::sortStudent() {    //sort the students by cms
    for(int i=0;i<used;i++){
        Student temp;   //temporary student object
        temp=student[i];
        for(int j=i;j<used;j++){
            if(temp.getCms()>student[j].getCms()){
                student[i]=student[j];
                student[j]=temp;
                temp=student[i];
            }
        }
    }

}

Course::~Course() {
    cout<<"distructor\n";
    delete[] student;
    student= nullptr;
}

