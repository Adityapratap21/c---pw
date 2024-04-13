#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;

    if(n<0) x= -n;
    int r =0;
    string s = to_string(n);
    int l = s.size();


    if(n>0){


        while(n>0){


        int b= n%10;
        r = r + b*pow(10,--l);
        n = n/10;
        }
        cout<<r;

    }
    else{

     l = l-1;
        while(x>0){


        int b= x%10;
        r = r + b*pow(10,--l);
        x = x/10;
        }
        cout<<-r;
    }

}