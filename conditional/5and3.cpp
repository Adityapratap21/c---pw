#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"The given number is divisible by 5 and 3 both";
    }
    else{
        cout<<"The given number is not  divisible by 5 and 3 both";
    }


}