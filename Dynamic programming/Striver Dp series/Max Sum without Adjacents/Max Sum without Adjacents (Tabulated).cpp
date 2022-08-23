int findMaxSum(int *arr, int n) {
	    // code here
	    int dp[n + 1];
	    memset(dp , -1 , sizeof(dp));
	    
	    dp[0] = arr[0];
	    
	    for(int i = 1; i < n; i++)
	    {
	        int pick = arr[i];
            
            if(i>1)
            pick += dp[i-2];
            
	        int notPick = 0 + dp[i - 1];
	        
	        dp[i] = max(pick , notPick);
	    }
	    
	    return dp[n - 1];
	}
