    int countMin(string str){
    //complete the function here
        int n = str.length();
        int dp[n + 1][n + 1];
        
        string str1 = str;
        reverse(str.begin(),str.end());
        
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(str1[i - 1] == str[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
                }
            }
        }
        
        return n - dp[n][n];
    }
