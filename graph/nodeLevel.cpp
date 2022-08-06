	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    
	    int level = 0;
	    vector<bool> visited(V,false);
	    
	    queue<int> q;
	    q.push(0);
	    visited[0] = true;
	    
	    while(!q.empty())
	    {
	        int size = q.size();
	        level++;
	        
	        while(size--)
	        {
	            int node = q.front();
	            q.pop();    
	            
	            for(auto nbr : adj[node])
	            {
	                if(!visited[nbr])
	                {
	                    visited[nbr] = true;
	                    q.push(nbr);
	                    
	                    if(nbr == X)
	                    return level;
	                    
	                }
	            }
	        }
	    }
	    
	    return -1;
	}
