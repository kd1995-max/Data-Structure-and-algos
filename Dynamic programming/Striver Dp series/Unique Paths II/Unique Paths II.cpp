class Solution {
public:
    int solve(int i, int j, vector<vector<int> > &maze, vector<vector<int> >  &dp) 
    {
      if(i>=0 && j>=0 && maze[i][j]== 1) 
        return 0; 
        
      if(i==0 && j == 0)
        return 1;
        
      if(i<0 || j<0)
        return 0;
        
      if(dp[i][j]!=-1) return dp[i][j];

      int up = solve(i-1,j,maze,dp);
      int left = solve(i,j-1,maze,dp);

      return dp[i][j] = up+left;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& maze) 
    {
        int n = maze.size();
        int m = maze[0].size();
        
        vector<vector<int> > dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,maze,dp);    
    }
};
