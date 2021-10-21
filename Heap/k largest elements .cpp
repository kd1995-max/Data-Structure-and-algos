vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> vec;
	    priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0; i < k; i++)
        pq.push(arr[i]);
        
        for(int i = k; i < n; i++)
        {
            if(pq.top() > arr[i])
            continue;
            else
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        while(!pq.empty())
        {
            vec.push_back(pq.top());
            pq.pop();
        }
        
        reverse(vec.begin(),vec.end());
        
        return vec;
	}
