void rearrange(long long *arr, int n) 
    { 
    	// Your code here
    	int min_Index = 0;
    	int max_Index = n - 1;
    	int max = arr[n - 1] + 1;
    	
    	for(int i = 0; i < n; i++)
    	{
    	    if(i%2 == 0)
    	    {
    	        arr[i] = (arr[max_Index]%max)*max + arr[i];
    	        
    	        max_Index--;
    	    }
    	    else{
    	        arr[i] = (arr[min_Index]%max)*max + arr[i];
    	        min_Index++;
    	    }
    	}
    	
    	
    	for(int i = 0; i < n; i++)
    	{
    	    arr[i] /= max;
    	}
    	
    }
