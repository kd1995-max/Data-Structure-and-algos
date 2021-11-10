bool isPrime(int N)
    {
        //Your code here
        if(N == 1)
        return false;
        
        if(N == 2 || N == 3)
        return true;
        
        if(N%2 == 0 || N%3 == 0)
        return false;
        
        for(int i = 5; i*i <= N; i+=6)
        {
            if(N%i == 0 || N%(i + 2) == 0)
            return false;
        }
        
        return true;
    }
