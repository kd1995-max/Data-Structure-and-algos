int minJumps(int arr[], int n){
        // Your code here
    
    	vector<int> dp(n, 1e9);
    	
    	dp[n - 1] = 0;  // start from last index. No jumps required to reach end if we are already here
    	
    	// same as above. For each index, explore all jump sizes and use the one requiring minimum jumps to reach end
    	for(int i = n - 2; i >= 0; i--) 
		{
		    for(int jumpLen = 1; jumpLen <= arr[i]; jumpLen++) 
			{
			    int jumps = dp[min(n - 1, i + jumpLen)]; //// min(n-1, i + jumpLen) for bounds handling
			    dp[i] = min(dp[i], 1 + jumps);  
			}
		}
    	return (dp[0] == 1e9) ? -1 : dp[0];
    }
