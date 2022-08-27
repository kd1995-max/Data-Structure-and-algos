//Coding Ninja
long long int solve(int i , int j, vector<int> &a,vector<vector<int>> &dp)
{
    if(i > j)
        return 0;

    int maxi = -1e9;
    
    if(dp[i][j] != -1)
    return dp[i][j];
    
    for(int ind = i; ind <= j; ind++)
    {
        int cost = a[i-1] * a[ind] * a[j+1]
            + solve(i , ind - 1, a, dp)
            + solve(ind + 1 , j , a, dp);

        maxi = max(maxi , cost);
    }

    return dp[i][j] = maxi;
}
int maxCoins(vector<int>& a)
{
	// Write your code here.
    
    int N = a.size();        
    vector<vector<int>> dp(N+1,vector<int>(N+1,-1));
    a.push_back(1);
    a.insert(a.begin() , 1);

    return solve(1,N,a,dp);
}
//GFG
long long int solve(int i , int j, vector<long long int> &a,vector<vector<long long int>> &dp)
{
    if(i > j)
        return 0;

    long long int maxi = INT_MIN;
    
    if(dp[i][j] != -1)
    return dp[i][j];
    
    for(int ind = i; ind <= j; ind++)
    {
        long long int cost = a[i-1] * a[ind] * a[j+1]
            + solve(i , ind - 1, a, dp)
            + solve(ind + 1 , j , a, dp);

        if(cost > maxi)
        maxi = cost;
    }

    return dp[i][j] = maxi;
}
    long long int maxProductSum(int N, int arr[])
    {
        // code here
        vector<long long int> a;
        vector<vector<long long int>> dp(N+1,vector<long long int>(N+1,-1));
        for(int i = 0; i < N; i++)
        {
            a.push_back(arr[i]);
        }
        
        a.push_back(1);
        a.insert(a.begin() , 1);
    
        return solve(1,N,a,dp);
    }
