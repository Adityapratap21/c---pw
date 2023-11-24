#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
void reversepart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }

}
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);

    display(v);
    cout<<endl;

    int k;
    cout<<"Enter no  of rotation ";
    cin>>k;


    int n = v.size();
    if(k>n){
        k= k%n;
    }
    reversepart(0,n-k-1,v);
    display(v);
    cout<<endl;
    reversepart(n-k,n-1,v);

    display(v);
    cout<<endl;
    reversepart(0,n-1,v);
    display(v);


}