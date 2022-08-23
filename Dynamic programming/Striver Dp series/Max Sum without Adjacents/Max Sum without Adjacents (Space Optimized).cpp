	int findMaxSum(int *arr, int n) {
	    // code here
	    
	    int prev = arr[0];
	    int prev2 = 0;
	    int curr_i;
	    
	    for(int i = 1; i < n; i++)
	    {
	        
	        int pick = arr[i];
            
            if(i>1)
            pick += prev2;
            
	        int notPick = 0 + prev;
	        
	        curr_i = max(pick , notPick);
	        
	        prev2 = prev;
	        prev = curr_i;
	        
	    }
	    
	    return prev;
	}
