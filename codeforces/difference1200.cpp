#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int j = 0;j<n;j++){
            int b ;
            cin>>b;
            if(b<=n){
                a[i] = b;
            }
        }
        int count = 0;
        for(int k=0;k<n;k++){
            for(int l = k+1;l<n;l++){
                if((a[l]-a[k])==(l-k)){
                    count++;
                }
            }
        }
        cout<<count<<endl;

    }
}