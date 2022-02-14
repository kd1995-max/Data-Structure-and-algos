void dfs(int node,vector<int> &storeDfs,vector<bool>&visited,vector<int> adj[])
    {
        storeDfs.push_back(node);
        
        visited[node] = true;
        
        for(auto it : adj[node])
        {
            if(!visited[it])
            dfs(it,storeDfs,visited,adj);
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> storeDfs;
        vector<bool> visited(V,false);
        
        for(int i = 0; i < V; i++)
        {
            if(!visited[i])    
            {
                dfs(i,storeDfs,visited,adj);
            }
        }
        return storeDfs;
    }
