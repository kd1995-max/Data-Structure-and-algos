    int solve(int i , int j , int a, int b, vector<vector<int>> &dp)
    {
        if(i == a - 1 || j == b - 1)
        return 1;
        
        if(dp[i][j] != -1)
        return dp[i][j];
        
        int right = solve(i + 1, j , a , b , dp);
        int down = solve(i, j + 1 , a , b , dp);
        
        return dp[i][j] = right + down; 
    }
    int NumberOfPath(int a, int b)
    {
        //code here
        vector<vector<int>> dp(a + 1 , vector<int>(b + 1 , -1));
        
        return solve(0 , 0 , a , b , dp);
    }
