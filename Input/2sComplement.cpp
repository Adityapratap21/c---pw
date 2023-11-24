#include<iostream>
using namespace std;
int fun(int n){
    if(n==1||n==0){
        cout<<n;
    }
    else{
    int p=n%2;
    int q=n/2;
    fun(q);
    cout<<p;
    }
}
int main(){

    int n;
    cout<<"Enter a binary No : ";
    cin>>n;

    int dec=0;
    int i=0;
    while(n>0){
        int b=n%10;
        dec=dec+b*pow(2,i);
        i++;
        n=n/10;

    }
    fun(-dec);


}