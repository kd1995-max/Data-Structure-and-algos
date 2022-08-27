
#include<bits/stdc++.h>

int solve(int i, int j,vector<int>& cuts, vector<vector<int>> &dp)
{
    if(i > j)
        return 0;

    int mini = INT_MAX;
    
    if(dp[i][j] != -1)
        return dp[i][j];
    
    for(int k = i; k <= j; k++)
    {
        int cost = (cuts[j + 1] - cuts[i - 1]) 
            + solve(i , k - 1, cuts,dp)
            + solve(k + 1 , j, cuts,dp);

        mini = min(mini , cost);
    }

    return dp[i][j] = mini;
}

int cost(int n, int c, vector<int> &cuts){
    // Write your code here.
    cuts.push_back(n);
    cuts.insert(cuts.begin() , 0);
    sort(cuts.begin() , cuts.end());
    
    vector<vector<int>> dp(c + 2, vector<int>(c + 2, 0));
    
    for(int i = c; i >= 1; i-- )
    {
        for(int j = 1; j <= c; j++ )
        {
            if(i > j)
                continue;
            
            int mini = 1e9;
            
            for(int k = i; k <= j; k++)
            {
                int cost = (cuts[j + 1] - cuts[i - 1]) 
                    + dp[i][k - 1]
                    + dp[k + 1][j];

                mini = min(mini , cost);
            }

            dp[i][j] = mini;
        }
    }
    return dp[1][c];
}
