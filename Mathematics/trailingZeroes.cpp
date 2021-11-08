int trailingZeroes(int n)
    {
        // Write Your Code here
        int res = 0;
        while(n)
        {
            res += n/5;
            
            n=n/5;
        }
        
        return res;
    }
