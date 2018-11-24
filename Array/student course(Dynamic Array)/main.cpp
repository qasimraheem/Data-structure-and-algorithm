#include <iostream>
#include <string>
#include "Course.h"
#include "Student.h"

using namespace std;
int main() {
    Course c1;
    Student s;
    char opt;

    do{
#ifdef _WIN32
        std::system("cls");
#else
        // Assume POSIX
        std::system("clear");
#endif
        cout<<"1.Create Course (only one)"<<endl;
        cout<<"2.Create Student (only one)"<<endl;
        cout<<"3.Assign Course to (created) STUDENT"<<endl;
        cout<<"4.Drop Student"<<endl;
        cout<<"5.Get Details"<<endl;
        cout<<"6.SEARCH BY CMS"<<endl;
        cout<<"7.SORT"<<endl;
        cout<<"E.EXIT"<<endl;
        cin>>opt;
        switch(opt){
            case '1':{
                cout<<"ENTER COURSE ID:";
                int id;
                cin>>id;
                cout<<"ENTER COURSE NAME:";
                string name;
                cin>>name;
                c1.setName(name);
                c1.setId(id);
                break;
            }
            case '2':{
               cout<<"ENTER STUDENT CMS:";
               int id;
               cin>>id;
               cout<<"ENTER STUDENT NAME:";
               string name;
               cin>>name;
               s.setName(name);
               s.setCms(id);
               break;
            }
            case '3':{
               c1.enroll(s);
               break;
            }
            case '4':{
               cout<<"ENTER STUDENT CMS:";
               int cms;
               cin>>cms;
               if(c1.search(cms)!=-1){
                   c1.drop(c1.getStudent()[c1.search(cms)]);
               }
               break;
            }
            case '5':{
               c1.print();
               break;
            }case '6':{
               cout<<"ENTER STUDENT CMS:";
               int cms;
               cin>>cms;
               if(c1.search(cms)!=-1){
                   cout<<"CMS:"<<c1.getStudent()[c1.search(cms)].getCms()<<"\tNAME:"<<c1.getStudent()[c1.search(cms)].getName()<<endl;
               }
               break;
            }case '7':{
               c1.sortStudent();
               break;
            }
            default:{
               cout<<"invalid input"<<endl;
}
}
   }while(opt!='e'&&opt!='E');

    return 0;
}