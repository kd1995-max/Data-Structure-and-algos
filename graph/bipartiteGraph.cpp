//BFS
bool solve(int src, vector<int> &color, vector<int> adj[]){
        queue<int> q;
        q.push(src);
        color[src] = 1;
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            
            for(auto it : adj[node])
            {
                if(color[it] == -1)
                {
                    color[it] = 1 - color[node];
                    q.push(it);
                }
                else if(color[it] == color[node])
                {
                    return false;
                }
            }
        }
        
        return true;
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V + 1, -1);
	    
	    for(int i = 0; i < V; i++)
	    {
	        if(color[i] == -1)
	        {
	            if(!solve(i , color , adj))
	            return false;
	        }
	    }
	    
	    return true;
	}

//DFS
    bool solve(int node, vector<int> &color, vector<int> adj[]){
        
        if(color[node] == -1)
        color[node] = 1;
        
        for(auto it : adj[node])
        {
            if(color[it] == -1)
            {
                color[it] = 1 - color[node];
                
                if(!solve(it,color,adj))
                return false;
            }
            
            else if(color[it] == color[node])
            {
                return false;
            }
            
        }
        
        return true;
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V + 1, -1);
	    
	    for(int i = 0; i < V; i++)
	    {
	        if(color[i] == -1)
	        {
	            if(!solve(i , color , adj))
	            return false;
	        }
	    }
	    
	    return true;
	}
