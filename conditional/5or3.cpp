// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     if(n%5==0 || n%3==0){
//         cout<<"The given number is divisible by 5 or 3 ";
//     }
//     else{
//         cout<<"The given number is not  divisible by 5 or 3 ";
//     }


// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int nums[n];
// for(int i=0;i<n;i++){
//     cin>>nums[i];
// }
//     int target;
//     cin>>target;
//     int a=1;
//      for(int i=0;i<n-1;i++){

// for(int j=a;j<=n-1;j++){
//             if(nums[i]+nums[j]==target){
//             cout<<"["<<i<<","<<j<<"]";

//         }
// }
// a++;
//      }
// return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of row";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}

