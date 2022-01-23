	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    
	    int msis[n];
	    
	    for(int i = 0; i < n; i++)
	    {
	        msis[i] = arr[i];
	        for(int j = 0; j < i; j++)
	        {
	            if(arr[j] < arr[i])
	            msis[i] = max(msis[i],msis[j] + arr[i]);
	        }
	    }
	    int sum = msis[0];
	    
	    for(int i = 1; i < n; i++)
	    {
	        sum = max(sum,msis[i]);
	    }
	    
	    return sum;
	}  
