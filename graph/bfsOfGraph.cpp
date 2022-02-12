 vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        
        bool visited[v + 1];
        
        memset(visited,false,sizeof(visited));
        
        queue<int> q;
        
        visited[0] = true;
        q.push(0);
        
        vector<int> vec;
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            
            vec.push_back(u);
            
            for(auto a : adj[u])
            {
                if(visited[a] == false)
                {
                    visited[a] = true;
                    q.push(a);
                }
            }
        }
        
        return vec;
    }
