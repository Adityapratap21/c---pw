//minimum value out of all the element in the array
// #include<iostream>
//#include<climits>
#include <bits/stdc++.h>
using namespace std;
int minimumvalue(int arr[],int size){
    int minimum = INT_MAX;
    for(int i=0;i<size;i++){
        //if(min>arr[i]){
            //min=arr[i];
       // }
       minimum=min(arr[i],minimum);
    }
    return minimum;

}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Minimum value is : "<<minimumvalue(arr,n);
}