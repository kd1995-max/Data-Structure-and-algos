 #define ll long long int
    #define max 1000000007
    
    ll fib(ll n, vector<ll>& dp){
        if(n <= 1) return n;
        
        ll first, second;
        
        if(dp[n-1] != -1) first = dp[n-1];
        else first = fib(n-1,dp);
        
        if(dp[n-2] != -1) second = dp[n-2];
        else second = fib(n-2,dp);
        
        return dp[n] = (first%max + second%max)%max;
    }  
  
    long long int nthFibonacci(long long int n){
        
        vector<ll> dp(n+1,-1);
        return fib(n,dp);
    }
