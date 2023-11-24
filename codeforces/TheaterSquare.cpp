#include<iostream>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;

    long long row,col;

    if(m%a==0){
        row = m/a;
    }
    else{
        row= m/a +1;
    }
    if(n%a==0){
        col = n/a;
    }
    else{
        col = n/a +1;
    }


    cout<<row*col;

}