#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side :";
    cin>>a;
     cout<<"Enter 2nd side :";
    cin>>b;
     cout<<"Enter 3rd side :";
    cin>>c;
    if((a+b>c) &&(a+c>b) &&(c+b>a)){
        cout<<a<<","<<b<<","<<c<<"can be the side of a traingle";
    }
    else cout<<"INvalid triangle";
}