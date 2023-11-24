#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<v.size()<<endl;
    vector<int> b(5,7); // initial size =5,each element is 7
    cout<<b[4];
}