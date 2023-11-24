#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,1,4,2,6,7,9,3,5,6,8,4,6,3,2,7,8,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   int m = sizeof(arr)/sizeof(arr[5]);
   cout<<n<<endl<<m;
}