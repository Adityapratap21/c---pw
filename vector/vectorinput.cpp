#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);
    vector<int>b;

    for(int i=0;i<5;i++){

        cin>>v[i];
    }
     for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
     for(int i=0;i<5;i++){
       int x;
       cin>>x;
       b.push_back(x);
    }
     for(int i=0;i<5;i++){
        cout<<b[i]<<" ";
 }

 }