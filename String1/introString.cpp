#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[5] = {'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    char str1[5] = "abcd";
     for(int i=0;i<5;i++){
        cout<<str1[i]<<" ";
    }
    cout<<endl;
    char str2[] = {'a','b','c','d','e','f'};
     for(int i=0;str2[i]!='\0';i++){
        cout<<str2[i]<<" ";
    }
    cout<<endl;
    cout<<str<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
}