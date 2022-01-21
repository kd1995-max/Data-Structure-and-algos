int maxSubsequenceSubstring(string X, string Y, int N, int M){
    //code
    int dp[N + 1][M + 1];
    
    for(int i = 0; i <= N; i++)
    {
        for(int j = 0; j <= M; j++)
        {
            if(i == 0 || j == 0)
            dp[i][j]=0;
        }
    }
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            if(X[i - 1] == Y[j - 1])
            dp[i][j] = 1 + dp[i - 1][j - 1];
            else
            dp[i][j] = dp[i - 1][j];
        }
    }
    
    int max_ = INT_MIN;
    
    for(int i = 0; i <= N; i++)
    {
        for(int j = 0; j <= M; j++)
        {
            max_ = max(dp[i][j] , max_);
        }
    }
    
    return max_;
}
