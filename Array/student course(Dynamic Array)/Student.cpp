//
// Created by qasim on 11/6/18.
//

#include "Student.h"
Student::Student() {
    cms=0;
    name="";
}
Student::Student(int cms,string name) {
    this->cms=cms;
    this->name=name;
}
int Student::getCms() const {
    return cms;
}

void Student::setCms(int cms) {
    Student::cms = cms;
}

const string &Student::getName() const {
    return name;
}

void Student::setName(const string &name) {
    Student::name = name;
}

Student::~Student() {

}
