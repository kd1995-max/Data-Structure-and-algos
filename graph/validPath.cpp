bool validPath(int n, vector<vector<int>>& edges, int source, int destination)
    {
        vector<int> adj[n+1];
        for(auto x:edges)
        {
            vector<int> temp = x;
            
            int u = temp[0];
            int v = temp[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> visited(n + 1, false);
        visited[source] = true;
        
        queue<int>q;
        q.push(source);
        
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            
            for(auto a : adj[u])
            {
                if(!visited[a])
                {
                    q.push(a);
                    visited[a] = true;
                }
            }
        }
        
        return visited[destination];
    }
