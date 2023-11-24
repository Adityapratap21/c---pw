cout<<"Enter the element of matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    cout<<matrixScore(grid);
