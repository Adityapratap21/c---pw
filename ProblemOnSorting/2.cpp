// when only +ve number is present
#include<iostream>

#include<climits>
using namespace std;
int main(){
    int arr[] ={19,12,23,8,16};
    int n =5;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int x =0;
    for(int i =0;i<n;i++){
        int min =INT_MAX;
        int mindx = -1;
        for(int j =0;j<n;j++){
            if(arr[j]<=0) continue;
            else{
                if(arr[j]<min){
                    min =arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = -x;

        x++;
    }
for(int i =0;i<n;i++){
        cout<<-arr[i]<<" ";
    }
    cout<<endl;

}