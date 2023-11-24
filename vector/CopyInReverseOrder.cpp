#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
int main(){
    vector<int>v1;
    v1.push_back(9);
    v1.push_back(10);
    v1.push_back(6);
    v1.push_back(1);
    v1.push_back(12);
    v1.push_back(11);
    v1.push_back(6);
    v1.push_back(0);

    display(v1);
    cout<<endl;

    vector<int>v2(v1.size());
    for(int i=0;i<v2.size();i++){
        //i+j=v1.size()-1
        int j=v1.size()-i-1;
        v2[i]=v1[j];
    }
    display(v2);


}