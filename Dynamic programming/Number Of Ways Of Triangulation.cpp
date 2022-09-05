#include<bits/stdc++.h>

using namespace std;

class Solution
{
    public:
    int solve(int n,vector<int> &dp)
    {
        
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2; i <= n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                dp[i] += dp[j] * dp[i - j  - 1];
            }
        }
        
        return dp[n];
    }
    
    int findCatalan(int n) 
    {
        //code here
        n = n - 2;
        vector<int> dp(n + 1, 0);
        return solve(n,dp);
    }
};

//{ Driver Code Starts.

int main() 
{
	    int n;
	    cin>>n;
	    Solution obj;
	    //calling function findCatalan function
	    cout<< obj.findCatalan(n) <<"\n";    
	return 0;
}
// } Driver Code Ends
