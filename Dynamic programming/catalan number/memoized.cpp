    cpp_int solve(int n,vector<cpp_int> &dp)
    {
        
        if(n <= 1)
        return 1;
        
        if(dp[n] != -1)
        return dp[n];
        
        cpp_int res = 0;
        
        for(int i = 0; i < n; i++)
        {
            res += solve(i,dp)*solve(n-i-1,dp);
        }
        
        return dp[n] = res;
    }
    cpp_int findCatalan(int n) 
    {
        //code here
        vector<cpp_int> dp(n + 1, -1);
        return solve(n,dp);
    }
