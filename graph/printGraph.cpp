    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        // Code here
        vector<vector<int>> res(V);
        for(int i=0;i<V;i++)
        {
            res[i].push_back(i);
            
            for(int j=0;j<adj[i].size();j++)
            {
                res[i].push_back(adj[i][j]);
            }
        }
        return res;
    }
