#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of student : ";
    cin>>n;

    int marks[n];
    cout<<"Enter the marks : ";
    // input
     for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    //output
    for(int i=0;i<n;i++){
        if(marks[i]<35){
        cout<<i<<" ";
    }
}}