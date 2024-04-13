#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // prefix sum algorithm
     for(int i=1;i<4;i++){
       arr[i] +=arr[i-1];
    }
     for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }

    // in other qs asked to find sum from index a to b then we find in prefixsumarray by
    // this prefixsum[b]-prefixsum[a-1]
}