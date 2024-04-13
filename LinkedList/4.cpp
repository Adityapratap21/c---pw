#include<iostream>
using namespace std;
class Student{   // user defined data type
public:
     string name;
     int rno;
     float marks;
   Student(string name,int rno,float marks){
    this->name = name;
    this->rno = rno;
   this->marks = marks;
   }
};
 void change(Student &s){
    s.name = "raghav";
 }
int main(){
    Student s("Aditya pratap singh",1,8.51);
    Student* ptr = &s;
    cout<<s.name<<endl;
    //(*ptr).name = "raghav";
    ptr->name = "raghav";

    cout<<s.name<<endl;

}