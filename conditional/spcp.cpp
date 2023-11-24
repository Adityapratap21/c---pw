#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cost price : ";
    cin>>cp;
     cout<<"Enter selling price : ";
     cin>>sp;
     if(sp>cp){
        cout<<"Profit = "<<sp-cp;
     }
     if(cp>sp){
        cout<<"Loss = "<<cp-sp;

     }
     if(sp==cp) cout<<"No Profit No Loss";

}