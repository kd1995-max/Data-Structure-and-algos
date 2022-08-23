

int solve(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp)
{
    if(dp[day][last] != -1)
        return dp[day][last];
    
    if(day == 0)
    {
        int maxi = 0;
        for(int task = 0; task < 3; task++)
        {
            if(task != last)
            maxi = max(maxi , points[0][task]);
        }
        return dp[day][last] = maxi;
    }
    
    int maxi = 0;
    for(int task = 0; task < 3; task++)
        {
            if(task != last)
            {
                int activity = points[day][task] + solve(day - 1,task, points , dp);
                maxi = max(maxi , activity);
            }
        }
    
    return dp[day][last] = maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>>  dp(n + 1 , vector<int> (4 , -1));
        
    return solve( n - 1 , 3 , points , dp);
}
