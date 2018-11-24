#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    int age,points;
    Student s[10];
    for(int i=0;i<10;i++){
        cout<<"ENTER AGE FOR STUDENT"<<i+1<<":";
        cin >> age;
        s[i].setAge(age);
        cout<<"ENTER POINTS FOR STUDENT"<<i+1<<":";
        cin >> points;
        s[i].setAge(points);
    }
    for(int i=0;i<10;i++){
        s[i].print();
    }
    return 0;
}