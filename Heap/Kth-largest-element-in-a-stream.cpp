void kthLargest(int arr[], int n, int k)
    {
    	// your code here
    	priority_queue< int,vector<int>,greater<int> > pq;
    	
    	for(int i = 0; i < k - 1; i++)
    	{
    	    cout << "-1" << " ";
    	    pq.push(arr[i]);       
    	}
    	
    	pq.push(arr[k-1]);
    	
    	for(int i = k; i < n; i++)
    	{
    	   if(pq.top() > arr[i])
            {
                cout <<pq.top()<< " ";
            }
            else
            {
                cout <<pq.top()<< " ";
                pq.pop();
                pq.push(arr[i]);
            }
    	}
    	
    	cout <<pq.top()<< " ";
        pq.pop();
    }
