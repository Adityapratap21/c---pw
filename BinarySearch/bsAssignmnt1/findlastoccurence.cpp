#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4,4,4,5};
    int n = 8;
    int target = 4;
    int lo = 0;
    int hi = n-1;
    // this approch made by me
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
      if(arr[mid]<target) lo = mid+1;
      if(arr[mid]==target){
       if(arr[mid-1]==target && arr[mid+1]==target){
        lo = mid +1;
       }
       else if(arr[mid]<arr[mid+1]){
         cout<<mid;
         break;

    }
    else{
        lo =mid+1;
    }
      }
    if(arr[mid]>target){
        hi = mid -1;
    }
    }
    }
