//partion in to two equal part of array
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i] +=arr[i-1];

    }
    // check if any x is exists

    int idx = -1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){

            idx =i;
            break;
        }
    }
    if(idx!=-1) cout<<"Yes it can be partitioned after "<<idx;
    else cout<<"Cannot be partitioned";
}
