#include<iostream>
using namespace std;
void print(int n){
    if(n==0)return;

    print(n-1);
    cout<<n<<endl;


}
void extraprint(int i ,int n){
    if(i>n) return;
    cout<<i<<endl;
    extraprint( i+1 ,n);
}
int main(){
    int n;
    cin>>n;
    int i =1;
    print(n);
    extraprint(i,n);
}
