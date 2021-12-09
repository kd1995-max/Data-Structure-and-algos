int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int N = nums.size();
	    vector<pair<int,int>> v(N);
    	
    	for(int i = 0; i < N; i++)
    	v[i] = {nums[i] , i};
    	
    	sort(v.begin(), v.end());
    	
    	int c = 0;
    	
    	for(int i = 0; i < N; i++)
    	{
    		if(v[i].second == i)
    		continue;
    		else
    		{
    			c++;
    			swap(v[i] , v[v[i].second]);
    			i--;
    		}
    	}
    	
    	return c;
	}
