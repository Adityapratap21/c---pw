#include<iostream>
#include<string>
using namespace std;
int main(){
    int x = 12345;
    string s = to_string(x);
    cout<<s<<endl;

    // find total no of digit

    cout<<"No of digits are : "<< s.length();
}