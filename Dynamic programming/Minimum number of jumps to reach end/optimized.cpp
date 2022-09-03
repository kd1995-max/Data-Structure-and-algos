int minJumps(int arr[], int n)
    {
        int i = 0;
        int maxReachable = 0;
        int lastJumpedPos = 0;
        int jumps = 0;
        
    	while(lastJumpedPos < n - 1) 
    	{  // loop till last jump hasn't taken us till the end
    		
    		maxReachable = max(maxReachable, i + nums[i]);  // furthest index reachable on the next level from current level
    		
    		if(i == lastJumpedPos) // current level has been iterated & maxReachable position on next level has been finalised
    		{			  
    			
    			lastJumpedPos = maxReachable;     // so just move to that maxReachable position
    			jumps++;                          // and increment the level
            	// NOTE: jump^ only gets updated after we iterate all possible jumps from previous level
            	//       This ensures jumps will only store minimum jump required to reach lastJumpedPos
    		}            
    		
    		i++;
    	}
    	return jumps;
    }
