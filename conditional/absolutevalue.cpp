#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    if(n<0){
        n=-n;
    }
    cout<<"The absolute value is "<<n;
}