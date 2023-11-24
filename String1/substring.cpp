#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s = "abcdef";

    // // s.substr(idx,len)
    // cout<<s.substr(4)<<endl;
    // cout<<s.substr(1,3)<<endl;
    // cout<<s.substr(2,2)<<endl;

    string str;
    cout<<"Enter a string : ";
    cin>>str;
    int n = str.length();
    // printing second half of string
    cout<<str.substr(n/2);




}