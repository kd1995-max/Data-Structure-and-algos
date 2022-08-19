void dfs(int i , int j, vector<vector<char>> &mat,int n , int m)
    {
        if(i < 0 or i >= n or j < 0 or j >= m or mat[i][j] == 'O')
        return;
        
        mat[i][j] = 'O';
        
        dfs(i,j-1,mat,n,m);
        dfs(i-1,j,mat,n,m);
        dfs(i,j+1,mat,n,m);
        dfs(i+1,j,mat,n,m);
        
    }
    
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 'X')
                {
                    count++;
                    dfs(i,j,grid,n,m);
                }
            }
        }
        
        return count;
    }
