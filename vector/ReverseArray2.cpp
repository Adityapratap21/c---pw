#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);

    display(v);
    cout<<endl;

    reverse(v.begin(),v.end());
    display(v);


}