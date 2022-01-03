#define mod 100000007
int fib(int n , vector<int> &dp)
{
    //Your code here
    if(dp[n] == -1)
    {
        if(n == 0)
        return 0;
        if(n == 1)
        return 1;
        
        int left = fib(n - 1,dp)%mod;
        int right = fib(n - 2,dp)%mod;

        int res = (left + right)%mod; 
        
        dp[n] = res;

        return res;
    }

    return dp[n];
}

int fibonacci(int n)
{
    // Your code here
    vector<int> dp(n + 1, -1);
    return fib(n, dp);
}   
