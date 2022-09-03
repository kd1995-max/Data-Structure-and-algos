    int solve(int n)
    {
        
        if(n <= 1)
        return 1;
        
        unsigned long int res = 0;
        
        for(int i = 0; i < n; i++)
        {
            res += solve(i)*solve(n-i-1);
        }
        
        return res;
    }
    cpp_int findCatalan(int n) 
    {
        //code here
        return solve(n);
    }
