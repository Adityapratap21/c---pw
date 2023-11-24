#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"The given number is divisible by both 5 and 3";
        }
        else{
            cout<<"The given number is not divisible by both 5 and 3";
        }
    }
}