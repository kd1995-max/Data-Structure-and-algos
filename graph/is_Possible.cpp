// new - updated
bool solve(vector<vector<int>>& grid,vector<vector<bool>>& vis,int x,int y){
       
       if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || vis[x][y]==true || grid[x][y]==0)
       {
           return false;
       }
       
       if(grid[x][y]==2) 
       return true;
       
       vis[x][y]=true;
       
       int dirX[4] = {-1,0,1,0};
       int dirY[4] = {0,1,0,-1};
       
       for(int i = 0; i < 4; i++)
       {
            int dx = x + dirX[i];
            int dy = y + dirY[i];
           
            if(solve(grid,vis,dx,dy)) 
            return true;    
       }
       
       vis[x][y]=false;
       
       return false;
   }
   
   bool is_Possible(vector<vector<int>>& grid) 
   {
       //code here
       int n = grid.size();
       int m = grid[0].size();
       
       vector<vector<bool>> vis(n,vector<bool>(m,false));
       
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(grid[i][j]==1)
               {
                   if(solve(grid,vis,i,j)) 
                   return true;
               }
           }
       }
       return false;
   }
// ================
bool solve(vector<vector<int>>& grid,vector<vector<bool>>& vis,int x,int y){
       
       if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || vis[x][y]==true || grid[x][y]==0)
       {
           return false;
       }
       
       if(grid[x][y]==2) return true;
       
       vis[x][y]=true;
       
       if(solve(grid,vis,x+1,y)) 
       return true;
       
       if(solve(grid,vis,x,y+1)) 
       return true;
       
       if(solve(grid,vis,x-1,y)) 
       return true;
       
       if(solve(grid,vis,x,y-1)) 
       return true;
       
       vis[x][y]=false;
       
       return false;
   }
   bool is_Possible(vector<vector<int>>& grid) 
   {
       //code here
       int n = grid.size();
       int m = grid[0].size();
       
       vector<vector<bool>> vis(n,vector<bool>(m,false));
       
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(grid[i][j]==1)
               {
                   if(solve(grid,vis,i,j)) 
                   return true;
               }
           }
       }
       return false;
   }
