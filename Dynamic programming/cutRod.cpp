int cutRod(int price[], int N) {
        //code here
        int length[N];
        
        for(int i = 1; i <= N; i++)
        {
            length[ i - 1] = i;
        }
        
        int dp[N + 1][N + 1];
        
        for(int i =0; i <= N; i++)
        {
            for(int j = 0; j <= N; j++)
            {
                if(i == 0 || j == 0)
                dp[i][j] = 0;
            }
        }
        
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= N; j++)
            {
                if(length[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
                else
                dp[i][j] = max(price[i - 1] + dp[i][j - length[i - 1]] , dp[i - 1][j]);
            }
        }
        
        return dp[N][N];
    }
