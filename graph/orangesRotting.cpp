    bool isValid(int i , int j,vector<vector<int>> &mat,int n,int m)
    {
        if(i >= 0 and i < n and j >= 0 and j < m and mat[i][j] == 1)
        return true;
        
        return false;
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        int fresh = 0;
        queue<pair<int,int>> q;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({i , j});
                }
                
                if(grid[i][j] == 1)
                {
                    fresh++;
                }
            }
        }
        
        if(fresh == 0)
        return -1;
        
        int timer = 0;
        while(!q.empty())
        {
            int size = q.size();
            bool isRotten = false;
            
            while(size--)
            {
                pair<int,int> p = q.front();
                q.pop();
                
                int x1 = p.first;
                int y1 = p.second;
                
                int xc[] = {1 , -1 , 0 , 0};              
                int yc[] = {0 , 0 , 1 , -1};
                
                for(int i = 0; i < 4; i++)
                {
                    int x = xc[i] + x1;
                    int y = yc[i] + y1;
                    
                    if(isValid(x , y , grid , n , m))
                    {
                        isRotten = true;
                        grid[x][y] = 2;
                        q.push({x , y});
                    }
                }
            }
            
            if(isRotten)
            timer++;
        }
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j] == 1)
                {
                    timer = 0;
                    break;
                }
            }
        }
        
        
        return (timer == 0) ? -1 : timer;
    }
