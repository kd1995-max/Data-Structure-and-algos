vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        if(n <= 1)
		return {};
		
        bool isPrime[n + 1];
        fill(isPrime, isPrime + n + 1, true);
        
        for(int i=2; i*i <= n; i++)
    	{
    		if(isPrime[i])
    		{
    			for(int j = 2*i; j <= n; j = j+i)
    			{
    				isPrime[j] = false;
    			}
    		}
    	}
        
        vector<int> Primes;
        for(int i = 2; i <= n; i++)
        {
            if(isPrime[i])
            Primes.push_back(i);
        }
        
        return Primes;
    }
