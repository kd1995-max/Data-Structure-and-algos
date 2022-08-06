    void dfs(int node,int destination, vector<int> adj[],vector<bool> &vis,int &count)
    {
        if(node == destination)    
        {
            count++;
            vis[destination] = false;
            return;
        }
        
        for(auto nbr : adj[node])
        {
            if(!vis[nbr])
            {
                vis[nbr] = true;
                dfs(nbr,destination,adj,vis,count);
            }
        }
        
        vis[node] = false;
    }
    
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        vector<bool> vis(V,false);
        int count = 0;
        
        for(int i = 0; i < V; i++)
        {
            if(i == source)
            {
                vis[source] = true;
                dfs(source,destination,adj,vis,count);
            }
        }
        
        return count;
    }
