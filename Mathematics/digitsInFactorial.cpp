int digitsInFactorial(int n)
    {
        // code here
        double val = 0;
        
        for(int i = 1; i <= n; i++)
        {
            val += log10(i);
        }
        
        return val + 1;
    }
