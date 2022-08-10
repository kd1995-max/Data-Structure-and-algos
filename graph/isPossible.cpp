	bool isPossible(int V, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<int> indegree(V , 0);
	    vector<int> adj[V];
	    
	    for(auto it:prerequisites){
	        indegree[it.second]++;
	        adj[it.first].push_back(it.second);
	    }

	    queue<int> q;
	    for(int i = 0; i < V; i++)
	    {
	        if(indegree[i] == 0)
	        {
	            q.push(i);
	        }
	    }
	    
	    int cnt = 0;
	  
	    while(!q.empty())
	    {
	        int node = q.front();
	        q.pop();
	        cnt++;
	        
	        for(auto it : adj[node])
	        {
	            indegree[it]--;
	            
	            if(indegree[it] == 0)
	            q.push(it);
	        }
	    }
	    
	    for(int i=0;i<V;i++){
	        
	        if(indegree[i] > 0)
	        return false;
	    }
	    
	    return true;
	}
