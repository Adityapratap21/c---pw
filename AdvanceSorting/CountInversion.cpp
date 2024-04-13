#include<iostream>   // TC of mergeSort = O(nlogn)
using namespace std;

int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
   vector<int> v(arr,arr+n);
   for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;


   int count =0;
   for(int i =0;i<v.size()-1;i++){
    for(int j = i+1;j<v.size();j++){
        if(v[i]>v[j]) count++;
    }
   }
   
   cout<<count;

}