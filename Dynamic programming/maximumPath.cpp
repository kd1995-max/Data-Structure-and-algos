int f(int i , int j, int n,vector<vector<int>> &mat,vector<vector<int>> &dp)
    {
        if(i < 0 || j < 0 || i >= n || j >= n)    
        return 0;
        
        if(dp[i][j] != -1)
        return dp[i][j];
        
        int dL = f(i + 1, j - 1, n , mat, dp);
        int d = f(i + 1, j, n , mat, dp);
        int dR = f(i + 1, j + 1, n , mat, dp);
        
        return dp[i][j] = mat[i][j] + max(dL, max(d,dR));
    }
    
    int maximumPath(int n, vector<vector<int>> mat)
    {
        // code here
        int maxi =INT_MIN;\
        
        vector<vector<int>> dp(n, vector<int>(n,-1));
        
        for(int i = 0; i < n; i++)
        {
            maxi = max(f(0 , i , n , mat, dp), maxi);
        }
        
        return maxi;
    }
