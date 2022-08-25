class Solution {
public:
    int solve(int i, bool buy,vector<int>& values,int n, vector<vector<vector<int>>> &dp,int cap)
    {
        if(cap == 0)
            return 0;

        if(i == n)
            return 0;

        if(dp[i][buy][cap] != -1)
            return dp[i][buy][cap];

        int profit;

        if(buy)
        {
               profit = max(-values[i] + solve(i + 1, 0, values , n, dp, cap),
                            0 + solve(i + 1, 1, values , n, dp, cap));
        }
        else
        {
            profit = max(values[i] + solve(i + 1, 1, values , n, dp,cap - 1),
                            0 + solve(i + 1, 0, values , n, dp,cap));
        }

        return dp[i][buy][cap] = profit;
    }
    int maxProfit(vector<int>& values) 
    {
        int n = values.size();
        vector<vector<vector<int>>> dp(n,
                                    vector<vector<int>> 
                                            (2,vector<int>(3,-1)));
        return solve(0,1,values,n,dp,2);
    }
};

// GFG Tabularized
int maxProfit(vector<int>&Arr){
    //Write your code here..
     int n = Arr.size();
             vector<vector<vector<int>>> dp(n+1,
                                    vector<vector<int>> 
                                            (2,vector<int>(3,0)));
    
    for(int ind = n-1; ind>=0; ind--){
        for(int buy = 0; buy<=1; buy++){
            for(int cap=1; cap<=2; cap++){
                
                if(buy==1){
                    dp[ind][buy][cap] = max(0+dp[ind+1][1][cap], 
                                -Arr[ind] + dp[ind+1][0][cap]);
                }
                else{
                    dp[ind][buy][cap] = max(0+dp[ind+1][0][cap],
                                Arr[ind] + dp[ind+1][1][cap - 1]);
                }
            }
        }
    }
    
    
    return dp[0][1][2];
}
