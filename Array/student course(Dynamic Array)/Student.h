//
// Created by qasim on 11/6/18.
//

#ifndef STUDENT_COURSE_STUDENT_H
#define STUDENT_COURSE_STUDENT_H

#include <string>
using namespace std;
class Student {
private:
    int cms;
    string name;

public:
    Student();
    Student(int, string);
    ~Student();
    int getCms() const;
    void setCms(int cms);
    const string &getName() const;
    void setName(const string &name);



};


#endif //STUDENT_COURSE_STUDENT_H
