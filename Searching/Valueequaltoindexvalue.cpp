	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> vec;
	    for(int i = 0; i < n; i++)
	    {
	        if((i + 1)== arr[i])
	        vec.push_back(arr[i]);
	    }
	    
	    return vec;
	}
