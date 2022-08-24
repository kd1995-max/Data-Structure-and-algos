typedef vector<vector<int>> vv;

int solve(int i, int j, vv &mat, vv &dp,int m, int n)
{
    if(j < 0 || j >= n)
        return -1e9;
    
    if(i == 0)
        return mat[i][j];
    
    if(dp[i][j] != -1)
        return dp[i][j];
    
    int up = mat[i][j] + solve(i-1,j,mat,dp,m,n);
    int ld = mat[i][j] + solve(i-1,j-1,mat,dp,m,n);
    int rd = mat[i][j] + solve(i-1,j+1,mat,dp,m,n);
    
    return dp[i][j] = max(up , max(ld , rd));
}

int getMaxPathSum(vector<vector<int>> &mat)
{
    //  Write your code here.
    int m = mat.size();
    int n = mat[0].size();
    
    vv dp(m , vector<int>(n,-1));
    int maxi = -1e9;
    
    for(int j = 0; j < n; j++)
    {
        maxi = max(solve(m - 1, j , mat, dp, m , n) , maxi);
    }
        
    return maxi;
}
