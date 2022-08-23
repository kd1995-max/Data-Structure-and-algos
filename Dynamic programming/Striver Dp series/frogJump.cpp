int solve(vector<int> &heights,vector<int> &dp, int i)
{
    if(i == 0)
        return 0;
    
    if(dp[i] != -1)
        return dp[i];
    
    int twoStep = 1e9;
    int oneStep = solve(heights,dp,i - 1) + abs(heights[i] - heights[i - 1]);
    
    if(i > 1)
    twoStep = solve(heights,dp,i - 2) + abs(heights[i] - heights[i - 2]);
    
    return dp[i] = min(oneStep , twoStep);
}

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n + 1, -1);
    
    solve(heights,dp,n);
    
    return dp[n - 1];
}
