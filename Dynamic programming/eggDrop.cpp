    int solve(int e , int f,vector<vector<int>> &dp)
    {
        if(f == 0 || f == 1)
        return f;
        
        if(e == 1)
        return f;
        
        if(dp[e][f] != -1)
        return dp[e][f];
        
        int mini = INT_MAX;
        
        for(int k = 1; k <= f; k++)
        {
            int temp = 1 + max(solve(e-1,k-1,dp) , solve(e,f-k,dp));
            
            mini = min(mini,temp);
        }
        
        return dp[e][f] = mini;
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
        return solve(n,k,dp);
    }

// Optimization on above code
    int solve(int e , int f,vector<vector<int>> &dp)
    {
        if(f == 0 || f == 1)
        return f;
        
        if(e == 1)
        return f;
        
        if(dp[e][f] != -1)
        return dp[e][f];
        
        int mini = INT_MAX;
        
        for(int k = 1; k <= f; k++)
        {
            int low;
            int high;
            
            if(dp[e-1][k-1] != -1)
            {
                low = dp[e-1][k-1];
            }
            else
            {
                low = solve(e-1,k-1,dp);
                dp[e-1][k-1] = low;
            }
            
            if(dp[e][f-k] != -1)
            {
                high = dp[e][f-k];
            }
            else
            {
                high = solve(e,f-k,dp);
                dp[e][f-k] = high;
            }
            
            int temp = 1 + max(low,high);
            
            mini = min(mini,temp);
        }
        
        return dp[e][f] = mini;
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
        return solve(n,k,dp);
    }
