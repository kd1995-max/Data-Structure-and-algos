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
	    
	    int sum = *max_element(msis,msis + n);
	    
	    return sum;
	}  
