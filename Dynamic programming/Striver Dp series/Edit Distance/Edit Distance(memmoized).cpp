  int solve(string s1, string s2, int i , int j, vector<vector<int>> &dp)
  {
      if(i == 0)
      return j;
      if(j == 0)
      return i;
      
      if(dp[i][j] != -1)
      return dp[i][j];
      
      if(s1[i - 1] == s2[j - 1])
      return dp[i][j] = solve(s1,s2,i-1,j-1,dp);
      else
      {
          int insert = solve(s1,s2,i,j-1,dp);
          int deletion = solve(s1,s2,i-1,j,dp);
          int replace = solve(s1,s2,i-1,j-1,dp);
          
          return dp[i][j] = 1 + min(insert, min(deletion , replace));
      }
  }
    int editDistance(string S1, string S2) {
        // Code here
        int n = S1.size();
        int m = S2.size();
        
        vector<vector<int>> dp(n + 1,vector<int>(m + 1,-1));
        return solve(S1,S2,n,m,dp);
    }
