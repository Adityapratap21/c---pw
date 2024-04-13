// merge sort in decreasing order
#include<iostream>
using namespace std;
void merge(vector<int> &a,vector<int> &b,vector<int> &c){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<b.size() && j<c.size()){
        if(b[i]>=c[j]){
            a[k]=b[i];
            i++;
        }
        else{
            a[k]=c[j];
            j++;
        }
        k++;
    }
    if(i==b.size()){
        while(j<c.size()){
            a[k]=c[j];
            j++;
            k++;
        }
    }
    if(j==c.size()){
        while(i<b.size()){
            a[k]=b[i];
            i++;
            k++;
        }
    }
}
void mergeSort(vector<int> &a){
    int n = a.size();
    if(n==1) return;
    int n1 = n/2 , n2 = n-n/2;

    vector<int>b(n1), c(n2);
    for(int i = 0;i<n1;i++){
       b[i] = a[i];
   }
   for(int i = 0;i<n2;i++){
       c[i]=a[i+n1];
   }
    mergeSort(b);
    mergeSort(c);
    merge(a,b,c);
}
int main(){
    int arr[]={3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+n);
    for(int i =0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    mergeSort(a);
    for(int i =0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}