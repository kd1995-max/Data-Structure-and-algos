int memo[1001][1001];
    
    int solve(int wt[], int val[], int w, int n)
    {
        
        if(n == 0 || w == 0)
        return 0;
        
        if(memo[n][w] != -1)
        return memo[n][w];
        
        if(wt[n - 1] <= w)
        return memo[n][w] = max(val[n - 1] + solve(wt,val,w - wt[n-1],n-1) , solve(wt,val,w,n - 1));
        
        else if(wt[n-1] > w)
        return memo[n][w] = solve(wt,val,w,n - 1);
        
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       memset(memo, - 1 , sizeof(memo));
       return solve(wt,val,W,n);
    }
