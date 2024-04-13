#include<iostream>
using namespace std;
class Student{   // user defined data type
public:
     string name;
     int rno;
     float marks;
   Student(string n,int r,float m){
    name = n;
    rno = r;
    marks = m;
   }
};
int main(){
    Student s("Aditya pratp singh",1,8.51);

    cout<<s.name<<endl;
    cout<<s.rno<<endl;
    cout<<s.marks<<endl;
}