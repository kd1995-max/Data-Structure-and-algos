//bell triangle    
int bellNumber(int n)
    {
       // Code Here
       long long dp[n+1][n+1];
       dp[0][0]=1;
       
       long long MOD = 1000000007;
       
       for(int i=1;i<=n;i++) {
           
           dp[i][0]=dp[i-1][i-1];
           
           for(int j=1;j<=i;j++) {
               
               dp[i][j] = ((dp[i][j-1]%MOD)+(dp[i-1][j-1]%MOD))%MOD;
               
           }
           
       }
       
       return dp[n][0];
       
    }
