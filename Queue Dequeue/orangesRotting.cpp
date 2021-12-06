int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int fresh = 0;
        int t = 0;
        
        queue<pair<int,int>> q;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                else if(grid[i][j]==1)
                {
                    fresh++;
                }
            }
        }

        while(!q.empty())
        {
            int size = q.size();
            
            for(int loop=0;loop<size;loop++)
            {
                int i = q.front().first;
                int j = q.front().second;

                q.pop();

                if(i-1>=0 && grid[i-1][j]==1)//up
                {
                    grid[i-1][j]=2;
                    fresh--;
                    q.push({i-1,j});
                }
                if(i+1<n && grid[i+1][j]==1)//down
                {
                    grid[i+1][j]=2;
                    fresh--;
                    q.push({i+1,j});
                }
                if(j-1>=0 && grid[i][j-1]==1)//left
                {
                    grid[i][j-1]=2;
                    fresh--;
                    q.push({i,j-1});
                }
                if(j+1<m && grid[i][j+1]==1)//right
                {
                    grid[i][j+1]=2;
                    fresh--;
                    q.push({i,j+1});
                }

            }

            t++;
        }
        
        if(fresh==0)
        {
            return t-1;
        }
        else
        {
            return -1;
        }
    }
