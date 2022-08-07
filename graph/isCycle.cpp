// BFS
bool checkForCycle(int s, int v,vector<int> adj[], vector<int>&visited)
    {
        queue<pair<int,int>>q;
        visited[s] = true;
        q.push({s,-1});
        
        while(!q.empty())
        {
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
            
            for(auto it : adj[node])
            {
                if(!visited[it])
                {
                    visited[it] = true;
                    q.push({it,node});
                }
                else if(par != it)
                return true;
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V, 0);
        
        for(int i = 1; i < V; i++)
        {
            if(!vis[i])
            {
                if(checkForCycle(i , V, adj, vis))
                return true;
            }
        }
        
        return false;
    }

// DFS
    bool solve(int node, int parent,vector<bool> &vis, vector<int> adj[])
    {
        vis[node] = true;
        
        for(auto it : adj[node])
        {
            if(!vis[it])
            {
                if(solve(it,node,vis,adj))
                return true;
            }
            else if(it != parent)
            return true;
        }
        
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> vis(V + 1 , 0);
        
        for(int i = 0; i < V; i++)
        {
            if(!vis[i])
            {
                if(solve(i,-1,vis,adj))    
                return true;
            }
            
        }
        
        return false;
    }
