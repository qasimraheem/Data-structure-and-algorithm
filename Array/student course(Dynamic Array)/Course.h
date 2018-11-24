//
// Created by qasim on 11/6/18.
//

#ifndef STUDENT_COURSE_COURSE_H
#define STUDENT_COURSE_COURSE_H

#include <iostream>
#include <string>
#include "Student.h"
using namespace std;
class Course {
private:
    int id;
public:
    int getId() const;

    void setId(int id);

private:
    string name;
    int capacity;
    int used;
    Student * student;
public:
    Course();//constructor
    Course(int id,string name);//constructor
    Course(int id,string name,int capcity);//constructor
    ~Course();

    void enroll(Student s);//enroll student
    void resize();//increase the size of array
    void drop(Student s);//remove student from course
    void print();//displays all the data of course
    void saveMemory(int i);//shift data to deleted indexes
    int search(int cms);//search student by cms
    void sortStudent();//sort all students by cms

    //getters & setters
    const string &getName() const;
    void setName(const string &name);
    int getCapacity() const;
    void setCapacity(int capacity);
    int getUsed() const;
    void setUsed(int used);
    Student *getStudent() const;
    void setStudent(Student *student);
    Student *getStudent1(int i);


};

#endif //STUDENT_COURSE_COURSE_H
