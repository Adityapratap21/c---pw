#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "AZYZXBDXJK";
    string str = "";
    for(int i =0;i< s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<str<<endl;
    sort(str.begin(),str.end());
    reverse(str.begin(),str.end());
    cout<<str<<endl;

}