// DFS 
bool solve(int node , vector<bool> &vis , vector<bool> &dfsVis , vector<int> adj[])
    {
        vis[node] = true;
        dfsVis[node] = true;
        
        for(auto it : adj[node])
        {
            if(!vis[it])
            {
                if(solve(it,vis,dfsVis,adj))
                return true;
            }
            else if(dfsVis[it])
            {
                return true;
            }
        }
        
        dfsVis[node] = false;
        
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis(V + 1 , false);
        vector<bool> dfsVis(V + 1, false);
        
        for(int i = 0; i < V; i++)
        {
            if(!vis[i])
            {
                if(solve(i , vis, dfsVis, adj))
                return true;
            }
        }
        
        return false;
    }
// BFS - using Kahn's Algo
vector<int> indegree(V + 1 , 0);
	    
	    for(int i = 0; i < V; i++)
	    {
	        for(auto it : adj[i])
	        {
	            indegree[it]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i = 0; i < V; i++)
	    {
	        if(indegree[i] == 0)
	        {
	            q.push(i);
	        }
	    }
	    
	    vector<int> topo;
	    while(!q.empty())
	    {
	        int node = q.front();
	        q.pop();
	        
	        topo.push_back(node);
	        
	        for(auto it : adj[node])
	        {
	            indegree[it]--;
	            
	            if(indegree[it] == 0)
	            q.push(it);
	        }
	    }
	    
	    return topo;
