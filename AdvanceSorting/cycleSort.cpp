// algo cyclic sort
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,6,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // cycle sort
    int i =0;
    while(i<n){
        int coorectIdx = arr[i]-1;
        if(i==coorectIdx) i++;
        else swap(arr[i],arr[coorectIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}