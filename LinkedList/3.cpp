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
    Student s("Aditya pratp singh",1,8.51);

    cout<<s.name<<endl;
    cout<<s.rno<<endl;
    cout<<s.marks<<endl;
    change(s);
    cout<<s.name<<endl;

}