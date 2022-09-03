    cpp_int solve(int n,vector<cpp_int> &dp)
    {
        
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2; i <= n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                dp[i] += dp[j] * dp[i - j  - 1];
            }
        }
        
        return dp[n];
    }
    cpp_int findCatalan(int n) 
    {
        //code here
        vector<cpp_int> dp(n + 1, 0);
        return solve(n,dp);
    }
