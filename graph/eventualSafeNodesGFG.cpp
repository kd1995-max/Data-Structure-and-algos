  bool dfs(int node, vector<bool> &vis,vector<bool> &dfsVis,vector<int> graph[],vector<bool> &cycle)
    {
        vis[node] = true;
        dfsVis[node] = true;
        
        for(auto nbr : graph[node])
        {
            if(!vis[nbr])
            {
                if(dfs(nbr,vis,dfsVis,graph,cycle))
                    return cycle[node] = true;
            }
            else if(vis[nbr] and dfsVis[nbr])
                return cycle[node] = true;
        }
        
        return dfsVis[node] = false;
    }
    vector<int> eventualSafeNodes(int n, vector<int> graph[]) {
        // code here
        
        vector<bool> vis(n , false);
        vector<bool> dfsVis(n , false);
        vector<bool> cycle(n , false);
        for(int i = 0; i < n; i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,dfsVis,graph,cycle);
            }
        }
        
        vector<int> ans;
        
        for(int i = 0; i < n; i++)
        {
            if(!cycle[i])
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
