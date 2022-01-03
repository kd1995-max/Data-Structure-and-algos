int solve(int n1, int n2, string s1, string s2, vector<vector<int>> &memo)
    {
        if(memo[n1][n2] != -1 )
        return memo[n1][n2];

        if(n1==0 || n2==0)
        {
            memo[n1][n2]=0;   
        }
        else
        {
            if(s1[n1 - 1] == s2[n2 - 1])
            {
                return 1 + solve(n1 - 1,n2 - 1, s1, s2,memo);
            }
            else
            {
                int left , right;
                
                left = solve(n1,n2 - 1, s1, s2 , memo);
                
                right = solve(n1 - 1,n2, s1, s2 , memo);
                
                int res = max(left , right);
                
                memo[n1][n2] = res;
            }
        }
        
        return memo[n1][n2];
    }
    
    int lcs(int n1, int n2, string s1, string s2)
    {
        // your code here
        vector<int> ob(n2 + 1, -1);
        vector<vector<int>> memo(n1 + 1 , ob);
        
        return solve(n1,n2,s1,s2,memo);
    }
