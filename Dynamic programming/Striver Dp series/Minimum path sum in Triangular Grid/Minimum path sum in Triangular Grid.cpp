typedef vector<vector<int>> vv;

int minimumPathSum(vector<vector<int>>& triangle, int n)
{
	// Write your code here.
    vv dp(n , vector<int>(n , 0));
    
    for(int i = 0; i < n; i++)
    {
        dp[n - 1][i] = triangle[n - 1][i];
    }
    
    for(int i = n - 2; i >= 0; i--)
    {
        for(int j = i; j >= 0; j--)
        {
            int bottom = triangle[i][j] + dp[i+1][j];
            int dg = triangle[i][j] + dp[i+1][j+1];
    
            dp[i][j] = min(dg , bottom);
        }
    }
    
    return dp[0][0];
}
