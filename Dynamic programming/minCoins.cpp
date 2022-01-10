int minCoins(int arr[], int M, int V) 
	{ 
	    // Your code goes 
	    int dp[M + 1][V + 1];
	    
	    for(int i = 0; i <= M; i++)
	    {
	        dp[i][0] = 0;
	    }
	    
	    for(int j = 0; j <= V; j++)
	    {
	        dp[0][j] = INT_MAX -1;
	    }
	    
	    for(int j = 1; j <= V; j++)
	    {
	        if(j%arr[0] == 0)
	        dp[1][j] = j/arr[0];
	        else
	        dp[1][j] = INT_MAX - 1;
	    }
	    
	    for(int i = 2; i <= M; i++)
	    {
	        for(int j = 1; j <= V; j++)
	        {
	            if(arr[i - 1] > j)
	            dp[i][j] = dp[i - 1][j];
	            else
	            dp[i][j] = min(1 + dp[i][j - arr[i - 1]] , dp[i - 1][j]);
	        }
	    }
	    
	    return (dp[M][V] == (INT_MAX - 1) ) ? -1 : dp[M][V];
	    
	} 
