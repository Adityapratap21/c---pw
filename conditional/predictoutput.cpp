#include<iostream>
using namespace std;
int main(){
    int a=5,b=4,c=3;
    if(a>b&&a>c) cout<<"a"<<endl;
    if(b>a||b>c) cout<<"b"<<endl;
    if(c>a&&c>b) cout<<"c"<<endl;
}