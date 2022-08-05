    bool isValid(int i , int j,vector<vector<char>> &mat,int n,int m)
    {
        if(i >= 0 and i < n and j >= 0 and j < m and mat[i][j] == 'O')
        return true;
        
        return false;
    }
    
    void dfs(int i , int j, vector<vector<char>> &mat,int n , int m)
    {
        mat[i][j] = 'B';
        
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
    
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        
        for(int i = 0; i < n; i++)
        {
            // left border
            if(mat[i][0] == 'O')
            {
                dfs(i,0,mat,n,m);
            }
            
            // right border
            if(mat[i][m - 1] == 'O')
            {
                dfs(i,m-1,mat,n,m);
            }
        }
        
        for(int j = 0; j < m; j++)
        {
            // top border
            if(mat[0][j] == 'O')
            {
                dfs(0,j,mat,n,m);
            }
            
            // bottom border
            if(mat[n-1][j] == 'O')
            {
                dfs(n-1,j,mat,n,m);
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(mat[i][j] == 'O')
                mat[i][j] = 'X';
                
                if(mat[i][j] == 'B')
                mat[i][j] = 'O';
            }
        }
        
        return mat;
    }
