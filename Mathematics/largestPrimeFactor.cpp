long long int largestPrimeFactor(int n){
        // code here
        int res = INT_MIN;
        if(n <= 1)
        return 1;
        
        while(n%2 == 0)
        {
            res = max(res,2);
            n = n/2;
        }
        
        while(n%3 == 0)
        {
            res = max(res,3);
            n = n/3;
        }
        int i;
        for(i = 5; i <= n; i+=6)
        {
            while(n%i == 0)
            {
                res = max(res,i);
                n = n/i;
            }
            while(n%(i + 2) == 0)
            {
                res = max(res,i + 2);
                n = n/(i+2);
            }
        }
        
        if(n > 3)
        res = max(res,n);
        
        return res;
    }
