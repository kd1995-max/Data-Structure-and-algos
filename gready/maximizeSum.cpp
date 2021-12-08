long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a , a + n);
        
        long long i = 0;
        
        //first targeting all the negative numbers and make it positive
        while(a[i] < 0 and k-- and i < n)
        {
            a[i] = -a[i];
            
            i++;
        }
        
        //when k was not zero
        if(k > 0)
        {
            sort(a , a + n);
            while(k > 0)
            {
                a[0] = -a[0];
                k--;
            }
        }
        
        long long sum = 0;
        for(long long i = 0; i < n; i++)
        {
            sum += a[i];
        }
        
        return sum;
    }
