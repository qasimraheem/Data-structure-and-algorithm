//
// Created by qasim on 10/12/18.
//

#include "Student.h"
using namespace std;
Student::Student() {

}
Student::Student(int age) {
    Student::age=age;
}
Student::Student(int age,int points) {
    Student::age=age;
    Student::points=points;
}
Student::~Student() {

}


int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}

int Student::getPoints() const {
    return points;
}

void Student::setPoints(int points) {
    Student::points = points;
}

void Student::print() {
    cout<<age<<endl;
    cout<<points<<endl;
}




