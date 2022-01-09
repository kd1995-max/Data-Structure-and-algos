 vector<int> boundaryTraversal(vector<vector<int> > arr, int n, int m) 
    {
        // code here
        vector<int> res;
        
        for(int i = 0; i <= m -1; i++)
        {
            res.push_back(arr[0][i]);
        }
        if(n == 1)
		return res;
		
        for(int i = 1; i <= n -1; i++)
        {
            res.push_back(arr[i][m-1]);
        }
        if(m == 1)
		return res;
		
        for(int i = m-2; i >= 0; i--)
        {
            res.push_back(arr[n-1][i]);
        }
        
        for(int i = n-2; i >= 1; i--)
        {
            res.push_back(arr[i][0]);
        }
        
        return res;
    }
