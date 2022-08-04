    int flag = 0;
    void dfs(int node, int parent, vector<int> &discT, vector<int> &low, unordered_map< int, bool > &visited, vector<int> adj[], int &timer,int c, int d)
    {
        visited[node] = true;
        discT[node] = low[node] = timer++;
        
        for(auto neighbour : adj[node])
        {
            if(neighbour == parent)
            continue;
            
            if(!visited[neighbour])
            {
                dfs(neighbour, node, discT, low, visited, adj, timer,c,d);
                
                low[node] = min(low[node] , low[neighbour]);
                
                if(low[neighbour] > discT[node])
                {
                    if((c == neighbour && d == node) || (d == neighbour && c == node))
                    {
                        flag = 1;
                        return;
                    }
                }
            }
            else
            {
                low[node] = min(low[node], discT[neighbour]);
            }
        }
    }
    
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
       int timer = 0;
       vector<int> discT(V,-1);
       vector<int> low(V,-1);
       int parent = -1;
       unordered_map<int,bool> visited;
       
       for(int i = 0; i < V; i++)
       {
           if(!visited[i])
           {
               dfs(i,parent,discT,low,visited,adj,timer,c,d);
           }
       }
        
        return  flag;
    }
