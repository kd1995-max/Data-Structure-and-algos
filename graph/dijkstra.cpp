    vector <int> dijkstra(int V, vector<vector<int>> adj[], int source)
    {
        // Code here
        vector<pair<int,int>> g[V + 1];
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        for(int i = 0; i < V; i++)
        {
            vector<vector<int>> vec = adj[i];
            int n = vec.size();
            
            for(int j = 0; j < n; j++)
            {
                g[i].push_back(make_pair(vec[j][0],vec[j][1]));
            }
        }

        vector<int> distTo(V + 1, INT_MAX);
        
        distTo[source] = 0;
        
        pq.push(make_pair(0,source));
        
        while(!pq.empty())
        {
            int dist = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            // way 1
            // for(auto it = g[node].begin(); it!=g[node].end(); it++)
            // {
            //     int nextNode = it->first;
            //     int nextDist = it->second;
                
            //     if(distTo[nextNode] > nextDist + dist)
            //     {
            //         distTo[nextNode] = nextDist + dist;
                    
            //         pq.push(make_pair(distTo[nextNode],nextNode));
            //     }
            // }
            
            // way 2
            vector<pair<int,int>> it = g[node];
            int n = it.size();
            
            for(int i = 0; i < n; i++)
            {
                int nextNode = it[i].first;
                int nextDist = it[i].second;
                
                if(distTo[nextNode] > nextDist + dist)
                {
                    distTo[nextNode] = nextDist + dist;
                    
                    pq.push(make_pair(distTo[nextNode],nextNode));
                }
            }
        }
        return distTo;
    }
