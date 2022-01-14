int longestCommonSubstr (string str1, string str2, int n, int m)
    {
        // your code here
        int dp[n + 1][m + 1];
        
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= m; j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(str1[ i - 1 ] == str2[ j - 1 ])
                dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                dp[i][j] = 0;
            }
        }
        
        int ans=INT_MIN;
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                ans=max(ans,dp[i][j]);
            }
        }
        
        return ans;
    }
