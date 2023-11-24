#include<iostream>
#include<vector>
using namespace std;

vector<int> mergesorted(vector<int> &arr1, vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();

    vector<int>res(m+n);

    int i = n-1;
    int j = m-1;
    int k = m+n-1;
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            res[k] = arr1[i];
            i--;
        }
        else{
            res[k] = arr2[j];
            j--;
        }
        k--;
    }
    if(i<0){
        while(j>=0){
            res[k] = arr2[j];
            j--;
            k--;
        }
    }

    if(j<0){
        while(i>=0){
            res[k] = arr1[i];
            i--;
            k--;
        }
    }

    return res;


}
int main(){
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);
    arr1.push_back(5);

     for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    vector<int>arr2;
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(8);
    arr2.push_back(9);
    arr2.push_back(10);
    arr2.push_back(11);
    arr2.push_back(12);
    arr2.push_back(13);

     for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }

    cout<<endl;

    vector<int> v = mergesorted(arr1,arr2);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}