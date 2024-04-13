// finding last occurence in consize way
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,4,4,4,5};
    int n = 8;
    int target = 4;
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    // this approch made by me
    while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(arr[mid]<=target){
        ans = mid;
        lo = mid +1;

    }
    else hi = mid - 1;
    }
    cout<<ans;
}