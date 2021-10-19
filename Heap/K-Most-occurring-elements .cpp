int kMostFrequent(int arr[], int n, int k) 
    { 
    	unordered_map<int,int> um;
    	
    	for(int i = 0; i < n; i++)
    	{
    	    um[arr[i]]++;
    	}
    	
    	priority_queue<int> freq;
    	
    	for(auto a : um)
    	{
    	    freq.push(a.second);
    	}
    	
    	int res = 0;
    	while(k--)
    	{
    	    res += freq.top();
    	    freq.pop();
    	}
    	
    	return res;
    }
