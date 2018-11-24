//
// Created by qasim on 10/12/18.
//

#ifndef DATA_STRUCTURE_AND_ALGORITHM_STUDENT_H
#define DATA_STRUCTURE_AND_ALGORITHM_STUDENT_H

#include <iostream>

class Student {

private:
    int age=0;
    int points=0;

public:
    Student();
    Student(int);
    Student(int,int);
    ~Student();

    int getAge() const;
    void setAge(int age);
    int getPoints() const;
    void setPoints(int points);

    void print();
};

#endif //DATA_STRUCTURE_AND_ALGORITHM_STUDENT_H
