#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int> > &grid,int target){
    int rows = grid.size();
    int cols = grid[0].size();
    int i = 0;
    int j = cols-1;
    while(i<=rows-1 && j>=0){
        if(grid[i][j]==target) return true;
        else if(grid[i][j]>target) j--;
        else i++;
    }
    return false;
}
int main(){
    cout <<"Enter No of Row : ";
    int m;
    cin>>m;
    cout<<"Enter No of Column : ";
    int n;
    cin>>n;
    int target;
    cout<<"Enter target";
    cin>>target;

    vector<vector<int> >grid(m,vector<int>(n));
    cout<<"Enter the element of matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    cout <<searchMatrix(grid,target);
}