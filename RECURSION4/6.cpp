// Generate parentheses
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void generate(string s,int open ,int close,int n){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n) generate(s + '(',open + 1,close ,n);
    if(close<open) generate(s + ')',open,close + 1 ,n);
}
int main(){
    int n;
    cout<<" enter no of  pair of parenthese : ";
    cin>>n;
    string s = "";
    generate(s,0,0,n);
}