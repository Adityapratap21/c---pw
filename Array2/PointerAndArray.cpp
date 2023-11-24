#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    int* ptr = arr;//giving address 
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr[0]<<" "<<*ptr<<endl;
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    ptr[0]=8;
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }
    *ptr = 10;
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }
     cout<<endl;
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;//ye pointing to next element

    }

}