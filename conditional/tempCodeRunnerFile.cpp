#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int nums[n];
for(int i=0;i<n;i++){
    cin>>nums[i];
}
    int target;
    cin>>target;
    int a=1;
     for(int i=0;i<n-1;i++){

for(int j=a;j<=n-1;j++){
            if(nums[i]+nums[j]==target){
                cout<<"["<<i<<","<<j<<"]";

        }
}
a++;
     }
return 0;
}