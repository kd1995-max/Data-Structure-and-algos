    int solve(int i, int j,vector<vector<int>>& grid,vector<vector<int>>& dp )
    {
        if(i == 0 and j == 0)
        return grid[0][0];
        
        if(i < 0 || j < 0)
        return 1e9;
        
        if(dp[i][j] != -1)
        return dp[i][j];
        
        int left = grid[i][j] + solve(i - 1, j , grid , dp);
        int right = grid[i][j] + solve(i, j - 1, grid , dp);
        
        return dp[i][j] = min(left , right);
    }
int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
     int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> dp(m , vector<int>(n, -1));
        
        return solve(m - 1, n - 1, grid, dp);
}
