	bool isValid(int i, int j, vector<vector<bool>>&visited, int n){
        if(i>=0 && i<n && j>=0 && j<n && visited[i][j] == false){
            return true;
        }
        return false;
    }
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	    // Code here
	    int kx = KnightPos[0] - 1;
	    int ky = KnightPos[1] - 1;
	    
	    int tx = TargetPos[0] - 1;
	    int ty = TargetPos[1] - 1;
	    
	    if(kx == tx and ky == ty)
	    return 0;
	    
	    vector<vector<bool>> visited(n,vector<bool>(n,false));
	    
	    queue<pair<int,int>> q;
	    q.push({kx,ky});
	    
	    visited[kx][ky] = true;
	    
	    int steps = 0;
	    
	    while(!q.empty())
	    {
	        int size = q.size();
	        steps++;
	        
	        while(size--)
	        {
	            pair<int,int> p = q.front();
	            q.pop();
	            
	            int x = p.first;
	            int y = p.second;
	            
	            int xc[] = {-1 , 1 , 2 , 2 , 1 , -1 , -2 , -2};
	            int yc[] = {2 , 2 , 1 , -1 , -2 , -2 , -1 , 1};
	            
	            for(int i = 0; i < 8; i++)
	            {
	                int nx = xc[i] + x;
	                int ny = yc[i] + y;
	                
	                if(nx == tx and ny == ty)
	                return steps;
	                
	                if(isValid(nx,ny,visited,n))
	                {
	                    visited[nx][ny] = true;
	                    q.push({nx,ny});
	                }
	            }
	        }
	    }
	    
	    return steps;
	    
	}
