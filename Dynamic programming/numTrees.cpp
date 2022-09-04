    int numTrees(int n) 
    {
        int mod = 1e9 + 7;
        // Your code here
        vector<long> dp(n+1,0);
        
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2; i <= n; i++)
        {
            dp[i] = 0;
            for(int j = 0; j < i; j++)
            {
                dp[i] = (dp[i] + dp[j]%mod * dp[i - j - 1]%mod)%mod;
            }
        }
        
        return dp[n];
    }
