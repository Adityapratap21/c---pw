#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number : ";
cin>>n;
int a=0;
cout<<"Prime Factor are : ";
for(int i=2;i<=n;i++){
    if(n%i==0){

        for(int j=2;j<i;j++){

            if(i%j==0){
                a=1;
               break;
            }

        }
        if(a==0){
            cout<< i <<" ";
        }
    }
}
}