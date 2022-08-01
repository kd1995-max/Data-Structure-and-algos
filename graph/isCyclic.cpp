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
