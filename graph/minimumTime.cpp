vector<int> minimumTime(int n,vector<vector<int>> &edges,int m)
        {
            // code here     
            int indegree[n+1] = {0};
            // memset(indegree,sizeof(indegree),0);
            
            vector<int> adj[n + 1];
            
            for(int i = 0; i < m; i++)
            {
                adj[edges[i][0]].push_back(edges[i][1]);
            }
            
            
            for(int i = 1; i <= n; i++)
            {
                for(auto v : adj[i])
                {
                    indegree[v]++;
                }
            }
            
            
            queue<int> q;
            vector<int> job(n,0);
            // vector<int> job(n+1,0);
            for(int i = 1; i <= n; i++)
            {
                if(indegree[i] == 0)
                {
                    q.push(i);
                    job[i-1]++;//-1 because of array indexing
                    // job[i]++;
                }
                
            }
            
            
            while(!q.empty())
            {
                int parent = q.front();
                q.pop();
                for(auto child : adj[parent])
                {
                    indegree[child]--;
                    
                    if(indegree[child] == 0)
                    {
                        q.push(child);
                        job[child-1] = job[parent-1] + 1;//-1 because of array indexing
                        // job[child] = job[parent] + 1;
                    }
                }
            }
            
            // rotate(job.begin(),job.begin() + 1, job.end());
            // job.pop_back();
            
            return job;
        }
