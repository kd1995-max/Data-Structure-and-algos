long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr , arr + n);
	    int count = 0;
	    
	    for(int i = 0; i < n; i++)
	    {
	        int l = i + 1;
	        int r = n - 1;
	        
	        while(l < r)
	        {
	            int currSum = arr[i] + arr[l] + arr[r];
	            
	            if(currSum < sum)
	            {
	                count+=(r - l);
	                l++;
	                
	            }
	            else
	                r--;
	        }
	    }
	    
	    return count;
	}
