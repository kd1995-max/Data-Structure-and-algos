class Solution {
public:
    long solve(int i, bool buy,vector<int>& values,int n, vector<vector<long>> &dp)
    {
        if(i == n)
            return 0;

        if(dp[i][buy] != -1)
            return dp[i][buy];

        int profit;

        if(buy)
        {
               profit = max(-values[i] + solve(i + 1, 0, values , n, dp),
                            0 + solve(i + 1, 1, values , n, dp));
        }
        else
        {
            profit = max(values[i] + solve(i + 1, 1, values , n, dp),
                            0 + solve(i + 1, 0, values , n, dp));
        }

        return dp[i][buy] = profit;
    }
    int maxProfit(vector<int>& values) 
    {
        int n = values.size();
        vector<vector<long>> dp(n , vector<long>(2,-1));
        return solve(0,1,values,n,dp);
    }
};
