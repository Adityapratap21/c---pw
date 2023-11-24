// score after flipping matrix;
#include<iostream>
#include<vector>
using namespace std;
int matrixScore(vector<vector<int> > &grid){
    int rows = grid.size();
    int cols = grid[0].size();
    for(int i=0;i<rows;i++){
        if(grid[i][0]==0){ // flip
           for(int j=0;j<cols;j++){
            if(grid[i][j]==0) grid[i][j] =1;
            else grid[i][j] = 0;
           }

        }
    }

    // flip the columns where noz>no of ones
    for(int j=0;j<cols;j++){
        int noz = 0;
        int noo = 0;
        for(int i=0;i<rows;i++){
            if(grid[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){ //flip
          for(int i=0;i<rows;i++){
            if(grid[i][j]==0) grid[i][j] = 1;
            else grid[i][j] = 0;
          }

        }
    }
    int sum = 0;
    for(int i=0;i<rows;i++){
        int x=1;
        for(int j=cols-1;j>=0;j--){
            sum += grid[i][j]*x;
            x *= 2;
        }
    }

    return sum;

}
int main(){
    cout <<"Enter No of Row : ";
    int m;
    cin>>m;
    cout<<"Enter No of Column : ";
    int n;
    cin>>n;

    vector<vector<int> >grid(m,vector<int>(n));
    cout<<"Enter the element of matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    cout <<matrixScore(grid);

}