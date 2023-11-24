//3 Pointer approch
#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int>&v){
    int n=v.size();
    int lo=0;
    int mid=0;
    int hi=n-1;
    while(mid<=hi){
        if(v[mid]==2){
            swap(v[mid],v[hi]);
            hi--;

        }
         if(v[mid]==0){
            swap(v[mid],v[lo]);
            lo++;
            mid++;
        }
        if(v[mid]==1){
            mid++;
        }


    }

}



int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort012(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
