// find the second largest element in the given array in one pass
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0;i<n;i++){

       if(arr[i]>max){
        smax=max;
        max=arr[i];
       }
       else if(smax<arr[i] && max!=arr[i]){
        smax=arr[i];
       }

    }
    if(smax==INT_MIN){
        cout<<"this array does not contain any second largest element ";
    }
    else{
    cout<<smax;
    }
    return 0;
}