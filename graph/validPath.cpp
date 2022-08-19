bool validPath(int n, vector<vector<int>>& edges, int source, int destination)
    {
        vector<int> adj[n+1];
        for(auto x:edges)
        {      
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
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
