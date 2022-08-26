class Solution {
public:
    int solve(int i, int prev,vector<int>& nums,vector<vector<int>>& dp,int n)
    {
        if(i == n)
            return 0;
        
        if(dp[i][prev + 1] != -1)
            return dp[i][prev + 1];
        
        int len = 0 + solve(i + 1, prev,nums,dp,n);
        
        if(prev == -1 || nums[i] > nums[prev])
            len = max(1 + solve(i + 1, i,nums,dp,n),len);
        
        return dp[i][prev + 1] = len;
    }
    
    int lengthOfLIS(vector<int>& nums) 
    {
        int n = nums.size();
        
        vector<vector<int>> dp(n , vector<int>(n + 1, -1));
        
        return solve(0, -1 , nums, dp, n);
    }
};
