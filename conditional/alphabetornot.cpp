#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int pr=(int)ch;
    if((65<=pr&&pr<=90)||(97<=pr&&pr<=122)){
        cout<<"Enter character is an alphabet";



    }
    else{
         cout<<"Enter character is not a alphabet";
    }
}