#include<iostream>
using namespace std;

    int main(){
    int m;
    cout<<"Enter the no of rows / columns : ";
    cin>>m;

    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
  //printing
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //store the transpose

    for(int i=0;i<m;i++){
        for(int j=i;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }






     // reverse each row
     int i = 0;
     int j = m-1;

     for(int k=0;k<m;k++){

        int i = 0;
     int j = m-1;

     while(i<j){
        swap(arr[k][i],arr[k][j]);
        i++;
        j--;
     }
     }

     //printing  90 degree rotation of matrix

     for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;

     }

}