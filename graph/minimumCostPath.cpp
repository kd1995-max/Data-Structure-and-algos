    #define Tupple pair<int,pair<int,int>>
    
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        int n = grid.size();
        
        vector<vector<int>> costs(n,vector<int>(n,INT_MAX));
        // <wt,x,y>
        priority_queue< Tupple ,vector<Tupple>, greater<Tupple> > pq;
        
        costs[0][0] = grid[0][0];
        
        pq.push({costs[0][0],{0,0}});
        
        int dx[] = {-1 , 1 , 0 , 0};
        int dy[] = {0 , 0 , -1 , 1};
        
        while(!pq.empty())
        {
            Tupple p = pq.top();
            pq.pop();
            
            int wt = p.first;
            int xo = p.second.first;
            int yo = p.second.second;
            
            for(int i = 0; i < 4; i++)
            {
                int xn = xo + dx[i];
                int yn = yo + dy[i];
                
                if(xn >= 0 and xn < n and yn >= 0 and yn < n)            
                {
                    if(costs[xn][yn] > wt + grid[xn][yn])
                    {
                        costs[xn][yn] = wt + grid[xn][yn];
                        pq.push({costs[xn][yn],{xn,yn}});
                    }
                }
            }
        }
        
        return costs[n-1][n-1];
    }
