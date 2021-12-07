vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n = grid.size();
    	int m = grid[0].size();
    	
    	//initialize the resulted grid with INT_MAX	
    	vector<vector<int>> ans(n,vector<int>(m,INT_MAX));
    	
    	//making pair of queue	
    	queue<pair<int,int>> q;
    	
    	for(int i = 0; i < n; i++)
    	{
    		for(int j = 0; j < m; j++)
    		{
    			if(grid[i][j] == 1)
    			{
    				ans[i][j] = 0;
    				
    				//inserting i and j index in queue
    				q.push({i , j});
    			}
    		}
    	}
    	
    	while(!q.empty())
    	{
    		int i = q.front().first;
    		int j = q.front().second;
    		
    		//up
    		if( (i - 1)>= 0 and (ans[i][j] + 1 < ans[i - 1][j]) )
    		{
    			ans[i - 1][j] = ans[i][j] + 1;
    			q.push({i - 1, j});
    		}
    		
    		//down
    		if( (i + 1) < n and (ans[i][j] + 1 < ans[i + 1][j]) )
    		{
    			ans[i + 1][j] = ans[i][j] + 1;
    			q.push({i + 1, j});			
    		}
    		
    		//left
    		if( (j - 1) >= 0 and ( ans[i][j] + 1 < ans[i][j - 1]) )
    		{
    			ans[i][j - 1] = ans[i][j] + 1;
    			q.push({i , j - 1});
    		}
    		
    		//right
    		if( (j + 1) < m and ans[i][j] + 1 < ans[i][j + 1])
    		{
    			ans[i][j + 1] = ans[i][j] + 1;
    			q.push({i , j + 1});
    		}
    		
    		q.pop();		
    	}
    	
    	return ans;
	}
