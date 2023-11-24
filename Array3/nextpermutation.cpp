#include<iostream>
#include<vector>
using namespace std;

void nextpermutation(vector<int> &v){
    int m=v.size();
     vector<int>res(m);
    //finding pivot index
    int idx = -1;
    for(int i=m-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){//if array is already greatest
        reverse(v.begin(),v.end());
        return;
    }
    //sorting/revese after pivot
    reverse(v.begin()+idx+1,v.end());
    // finding the just greater element than idx
    int j=-1;
    for(int i=idx+1;i<m;i++){
        if(v[i]>v[idx]){
            j=i;
            break;
        }
    }
    // swapping idx and j
    int temp=v[idx];
        v[idx]=v[j];
        v[j]=temp;








}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    vector<int>v(n);
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     nextpermutation(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
     }
}