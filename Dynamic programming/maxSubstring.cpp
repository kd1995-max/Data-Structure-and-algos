int maxSubstring(string str)
	{
	    // Your code goes here
	    int n = str.length();
	    int arr[n];
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(str[i] == '1')
	        arr[i] = -1;
	        else
	        arr[i] = 1;
	        
	    }
	    
	    int maxi = INT_MIN;
        
        int sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            
            maxi = max(maxi,sum);
            
            if(sum<0)
            sum=0;
        }
        
        return maxi;
	}
