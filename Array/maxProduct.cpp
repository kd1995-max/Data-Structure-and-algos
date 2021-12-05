long long max_(long long a , long long b)
	{
	    return (a > b) ? a : b;
	}
	
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long maxpod = 1;
        long long res = 1;
        
        for(int i = 0; i< n; i++)
        {
            maxpod = max_(maxpod * arr[i] , arr[i]);
            
            res = max_(res , maxpod);
        }
        
        return res;
	}
