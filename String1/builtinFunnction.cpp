#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "Aditya Pratap Singh";
    // cout<<str.size()<<endl;

    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;

    // string s = "Aditya";
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s;

    // string s1 = "abc";
    // cout<<s1<<endl;
    // string t = "def";
    // s1 = s1 + t;
    // cout<<s1<<endl;
    // cout<<s1 + "xyz"<<endl;
    // cout<<s1 + "123";

    string s2 = "abcdef";
    cout<<s2<<endl;
    reverse(s2.begin(),s2.end());
    cout<<s2<<endl;
    reverse(s2.begin()+2,s2.end());
    cout<<s2<<endl;
reverse(s2.begin()+2,s2.end()-1);
    cout<<s2<<endl;
    reverse(s2.begin()+2,s2.end()-2);
    cout<<s2<<endl;




}