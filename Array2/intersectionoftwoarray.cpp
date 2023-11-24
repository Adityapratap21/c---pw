#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,2,5,4};
    int arr1[7]={1,7,5,9,2,4,6};
    cout<<"common element bw two array is : ";
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            if(arr[i]==arr1[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}