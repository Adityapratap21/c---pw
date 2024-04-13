#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s = to_string(t);
    int n=s.length();
    int a = n;
    int ans = 0;
    for(int i=0;i<s.length();i++){

        int x = t%10;
        if(x==9 && a==1){
           ans = ans*10 +x;
           continue;
        }
        if(x>=5){
            int v=9-x;
           ans = ans*10 +v;

        }
        else{
            ans = ans*10 +x;
        }
        t =t/10;
        a--;
    }
    int p=0;

    for(int i=0;i<n;i++){
     p =p*10+ans%10;
     ans = ans/10;
    }
    cout<<p;
}