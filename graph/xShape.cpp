    bool isValid(int i , int j,vector<vector<char>> &mat,int n,int m)
    {
        if(i >= 0 and i < n and j >= 0 and j < m and mat[i][j] == 'X')
        return true;
        
        return false;
    }
    
    void dfs(int i , int j, vector<vector<char>> &mat,int n , int m)
    {
        mat[i][j] = 'O';
        
        if(isValid(i,j-1,mat,n,m))
        {
            dfs(i,j-1,mat,n,m);
        }
        
        if(isValid(i-1,j,mat,n,m))
        {
            dfs(i-1,j,mat,n,m);
        }
        
        if(isValid(i,j+1,mat,n,m))
        {
            dfs(i,j+1,mat,n,m);
        }
        
        if(isValid(i+1,j,mat,n,m))
        {
            dfs(i+1,j,mat,n,m);
        }
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
