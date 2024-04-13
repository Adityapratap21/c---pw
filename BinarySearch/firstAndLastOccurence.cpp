#include<iostream>
using namespace std;
vector<int> firstLastOccurence(vector<int> &arr,int target){
    int lo = 0;
    int hi = arr.size()-1;
    int first = -1;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid]==target){
            first = mid;
            hi = mid-1;
        }
        else if(arr[mid]>target) hi =mid-1;
        else lo = mid+1;


    }
     lo = 0;
     hi =arr.size()-1;
     int last = -1;
     while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid]==target){
            last = mid;
            lo = mid+1;
        }
        else if(arr[mid]>target) hi =mid-1;
        else lo = mid+1;


    }
   vector<int> v(2);
   v[0]=first;
   v[1]=last;
   return v;



}
int main(){
    int a[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    vector<int>arr(a,a+13);
    vector<int> b;
    b= firstLastOccurence(arr,3);
    cout<<b[0]<<" "<<b[1];
}