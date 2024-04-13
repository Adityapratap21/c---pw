#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int lo = 0;
    int hi = n-1;
    int target = 18;
    bool flag = false;



    while(lo<=hi){
         int mid =  (hi+lo)/2;
        if(arr[mid]==target){
            flag = true;
            break;
        }
        else if(arr[mid]>target) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag==false) {
        cout<<"Target is not found";
    }
    else cout<<"Target is  found";
}