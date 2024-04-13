#include<iostream>
using namespace std;
class Student{
public:
     string name;
     int rno;
     float marks;

};
int main(){
    Student s;
    s.name="Aditya pratp singh";
    s.rno = 1;
    s.marks = 8.5;
    cout<<s.name<<endl;
    cout<<s.rno<<endl;
    cout<<s.marks<<endl;
}