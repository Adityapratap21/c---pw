#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int n,x;
        cin>>n>>x;
        int a[n];
        int maxi=0;
        for(int i=0;i<n;i++){

            cin>>a[i];
        if(i) maxi = max(maxi,a[i]-a[i-1]);
        else maxi = max(maxi,a[i]-maxi);
        }
        maxi = max(maxi,2*(x-a[n-1]));
        cout<<maxi<<endl;
        t--;
    }
}