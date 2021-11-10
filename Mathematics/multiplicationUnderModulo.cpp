int multiplicationUnderModulo(long long a,long long b)
    {
        //your code here
        int M = 1000000007;
        a %= M;
        b %= M;
        
        return (a * b) % M;
    }
