int f(int i , int j, int n, int m, vector<vector<int>> &mat,vector<vector<int>> &dp)
    {
        if( i < 0 || j < 0 || i >= n || j >= m)    
        return 0;
        
        if(dp[i][j] != -1)
        return dp[i][j];
        
        int tR = f(i - 1, j + 1, n , m , mat,dp);
        int r = f(i,j + 1, n , m , mat,dp);
        int dR = f(i + 1, j + 1, n , m ,mat,dp);
        
        return dp[i][j] = mat[i][j] + max(tR , max(r,dR));
    }
    
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        int maxi = INT_MIN;
        vector<vector<int>> dp(n, vector<int>(m,-1));
        
        for(int i = 0; i < n; i++)
        {
            maxi = max(f(i,0,n,m,M,dp),maxi);
        }
        
        return maxi;
    }
