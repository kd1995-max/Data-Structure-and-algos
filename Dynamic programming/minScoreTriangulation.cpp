class Solution {
public:
    int solve(int i , int j, vector<int>& values,vector<vector<int>> &dp)
    {
        if(i + 1 == j)    
            return 0;
        
        int mini = INT_MAX;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        for(int k = i + 1; k <= j - 1; k++)
        {
            mini = min(mini, values[i]*values[k]*values[j] + solve(i,k,values,dp) + solve(k,j,values,dp));
        }
        
        return dp[i][j] = mini;
    }
    
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return solve(0 , n -1 , values,dp);
    }
};
