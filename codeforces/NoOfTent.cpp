#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long tent=a;
       if(b%3==0){
        tent +=b/3;
       }
       else{
        if((b%3+c)>=3){
            tent +=b/3+(b%3+1)/3;
            if(c-1<=3) tent +=1;
            else tent +=(c-1)/3;
            cout<<tent<<endl;
        }
        else cout<<-1<<endl;
       }

    }
}