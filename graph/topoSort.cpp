// DFS
void solve(int node, stack<int> &ans, vector<int> &vis, vector<int> adj[])
	{
	    vis[node] = true;
	    
	    for(auto it : adj[node])
	    {
	        if(!vis[it])
	        solve(it,ans,vis,adj);
	    }
	    
	    ans.push(node);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int> st;
	    vector<int> vis(V + 1, false);
	    
	    for(int i = 0; i < V; i++)
	    {
	        if(!vis[i])
	        {
	            solve(i,st,vis,adj);
	        }
	    }
	    
	    vector<int> res;
	    
	    while(!st.empty())
	    {
	        res.push_back(st.top());
	        
	        st.pop();
	    }
	    
	    return res;
	}
// BFS - Kahan's Algorithm
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> indegree(V + 1 , 0);
	    
	    for(int i = 0; i < V; i++)
	    {
	        for(auto it : adj[i])
	        {
	            indegree[it]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i = 0; i < V; i++)
	    {
	        if(indegree[i] == 0)
	        {
	            q.push(i);
	        }
	    }
	    
	    vector<int> topo;
	    while(!q.empty())
	    {
	        int node = q.front();
	        q.pop();
	        
	        topo.push_back(node);
	        
	        for(auto it : adj[node])
	        {
	            indegree[it]--;
	            
	            if(indegree[it] == 0)
	            q.push(it);
	        }
	    }
	    
	    return topo;
	}
