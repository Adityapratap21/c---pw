#include<iostream>
#include<vector>
using namespace std;
int main(){
   int arr[6] = {5,-4,0,3,26,1};
   int n = 6;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   // bubble sort
   for(int i = 0;i<n-1;i++){ // n-1 passes
    //traverse
    for(int j =0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

}