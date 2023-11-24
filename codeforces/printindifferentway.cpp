#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n+1;i++){
        string s;
        getline(cin,s);
        int len = s.length();
        if(len>10 && len<=100){
            cout<<s[0]<<len-2<<s[len-1];
            cout<<endl;
        }
        else{
            cout<<s;
            cout<<endl;
        }
    }
}