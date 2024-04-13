#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long cnt=0;

            for(int j=n-1;j>0;j--){
            for(int i=0;i<j;i++){
             if((arr[j]-j)==(arr[i]-i)) cnt++;
            }
            }
          cout<<cnt<<endl;

        }

}