 void dfs(int node,int parent,vector<int> &disc,vector<int> &low,unordered_map<int,bool> &vis,vector<int> adj[], vector<int> &ap,int timer)
  {
    vis[node] = true;
    disc[node] = low[node] = timer++;
    int child = 0;
    
    for(auto nbr : adj[node])
    {
        if(nbr == parent)
        continue;
        
        if(!vis[nbr])
        {
            dfs(nbr,node,disc,low,vis,adj,ap,timer);
            
            low[node] = min(low[node],low[nbr]);
            
            //condition for articulation point
            if(low[nbr] >= disc[node] and parent != -1)
            ap[node] = 1;
            
            child++;
        }
        else//back edge condition
        {
            low[node] = min(low[node],disc[nbr]);
        }
    }
    
    //condition for articulation point
    if(parent == -1 and child > 1)
    ap[node] = 1;
    
  }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        int timer = 0;
        vector<int> disc(V,-1);
        vector<int> low(V,-1);
        unordered_map<int,bool> vis;
        vector<int> ap(V,0);
        
        for(int i = 0; i < V; i++)
        {
            if(!vis[i])
            {
                dfs(i,-1,disc,low,vis,adj,ap,timer);
            }
        }
        vector<int> ans;
        
        for(int i = 0; i < V; i++)
        {
            if(ap[i])
            ans.push_back(i);
        }
        
        if(ans.size() == 0)
        return {-1};
        
        return ans;
    }
