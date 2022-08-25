typedef vector<vector<int>> vv;

class Solution{
    public:
    
    bool solve(string wild, string pattern, int i, int j, vv &dp)
    {
        if(i < 0 and j < 0)    
        return true;
        
        if(i < 0 and j >= 0)
        return false;
        
        if(i >= 0 and j < 0)
        {
            for(int ii = 0; ii <= i; ii++)
            {
                if(wild[ii] != '*')
                return false;
            }
            return true;
        }
        
        if(dp[i][j] != -1)
        return dp[i][j];
        
        if(wild[i] == pattern[j] or wild[i] == '?')
        return dp[i][j] = solve(wild , pattern , i-1, j-1, dp);
        else
        {
            if(wild[i] == '*')
            {
                return dp[i][j] = solve(wild , pattern , i-1, j , dp) || solve(wild , pattern , i, j-1 , dp);
            }
            else
            {
                return false;
            }
        }
    }
    
    bool match(string wild, string pattern)
    {
        // code here
          int n = wild.size();
          int m = pattern.size();
        
          vector < vector < int >> dp(n, vector < int > (m, -1));
          return solve(wild, pattern, n - 1, m - 1, dp);
    }
