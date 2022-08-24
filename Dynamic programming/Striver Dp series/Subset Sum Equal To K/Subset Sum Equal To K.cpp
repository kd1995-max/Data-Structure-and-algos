bool solve(int i,int target, vector<int> &arr, vector<vector<int>> &dp)
{
    if(target == 0)
        return true;
    
    if(i == 0)
        return arr[0] == target;
    
    if(dp[i][target] != -1)
        return dp[i][target];
    
    bool notPick = solve(i - 1,target,arr,dp);
    
    bool pick = false;
    if(arr[i] <= target)
        pick = solve(i - 1,target - arr[i],arr,dp);
    
    return dp[i][target] = pick || notPick;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
    
    return solve(n - 1, k , arr, dp);
}
