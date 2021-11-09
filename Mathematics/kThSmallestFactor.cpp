int kThSmallestFactor(int n , int k) {
        // code here
         int i;
        for(i = 1; i * i < n; i++)
            if(n % i == 0 && --k == 0)
                return i;
        
        for(i = sqrt(n); i >= 1; i--)
            if(n % i == 0 && --k == 0)
                return n/i;
        
        return -1;
    
    }
