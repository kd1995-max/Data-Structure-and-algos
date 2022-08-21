void solve(int i, int j , vector<vector<int>> &m,vector<string> &ans, int n, string str)
    {
        if(i < 0 or j < 0 or i >= n or j >= n or (m[i][j] == 0))
            return;
        
        
        if(i == (n - 1) && j == (n - 1) )
        {
            ans.push_back(str);
            return;
        }
        
        m[i][j] = 0;
        
        
        solve(i-1,j,m,ans,n,str + 'U');
        solve(i,j + 1, m , ans , n , str + 'R');
        solve(i + 1,j, m , ans , n , str + 'D');
        solve(i,j - 1, m , ans , n , str + 'L');
        
        m[i][j] = 1;
        
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0] == 0 or m[n - 1][n - 1] == 0)
        return ans;
        
        solve(0 , 0, m , ans, n , "");
        
        return ans;
    }
