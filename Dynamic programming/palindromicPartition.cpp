int dp[1001][1001];

 bool isPalidrome(string &s,int start,int end)
 {
      if(start==end || start>end)
          return true;
       while(start<end)
       {
           if(s[start] != s[end])
               return false;
           
           start++;
           end--;
       } 
       return true;
   }

    int solve(string s, int i, int j)
    {
        int a,b;
        if(i >= j)    
        return 0;
        
        if(isPalidrome(s,i,j))
        return 0;
        
        if(dp[i][j] != -1)
        return dp[i][j];
        
        int mn = INT_MAX;
        
        for(int k = i; k <= j - 1; k++)
        {
            if(dp[i][k] != -1)
            a =  dp[i][k];
            else
            {
                a = solve(s,i,k);
                dp[i][k] = a;
            }
            
            if(dp[k+1][j] != -1)
            b = dp[k + 1][j];
            else
            {
                b = solve(s , k + 1 , j);
                dp[k + 1][j] = b;
            }
                
            int temp = a + b + 1;
            mn = min(mn,temp);
            
        }
        
        return dp[i][j] = mn;
    }
    
    int palindromicPartition(string str)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(str,0,str.length() - 1);
    }
