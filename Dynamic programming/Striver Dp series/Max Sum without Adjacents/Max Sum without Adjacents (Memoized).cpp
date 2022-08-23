	int solve(int i,int arr[], int dp[])
	{
	    if(i == 0)    
	    return arr[0];
	    
	    if(i < 0)
	    return 0;
	    
	    if(dp[i] != -1)
	    {
	        return dp[i];
	    }
	    
	    int pick = arr[i] + solve(i - 2, arr , dp);
	    int notPick = 0 + solve(i - 1, arr , dp);
	    
	    return dp[i] = max(pick , notPick);
	}
	
	int findMaxSum(int *arr, int n) {
	    // code here
	    if(n == 1)
	    return arr[0];
	    
	    int dp[n];
	    
	    memset(dp , -1 , sizeof(dp));
	    
	    solve(n - 1, arr , dp);
	    
	    
	    return dp[n - 1];
	}
