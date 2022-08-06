void dfs(int node,vector<int> adj[],vector<bool> &vis)
    {
        vis[node] = true;
        
        for(auto nbr : adj[node])
        {
            if(!vis[nbr])    
            {
                vis[nbr] = true;
                dfs(nbr,adj,vis);
            }
        }
        
    }
    
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    vector<bool> vis(V,false);
	    int possibleMother = -1;
	    
	    for(int i = 0; i < V; i++)
	    {
	        if(!vis[i])
	        {
	            dfs(i,adj,vis);
	            possibleMother = i;
	        }
	    }
	    
	    for(int i = 0; i < V; i++)
	        vis[i] = false;
	        
	   dfs(possibleMother,adj,vis);
	   
	   for(int i = 0; i < V; i++)
	   {
	       if(!vis[i])
	       {
	           return -1;
	       }
	   }
	   
	   return possibleMother;
	}
