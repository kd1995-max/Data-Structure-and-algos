int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a,a+n);
        
        long long sum=0;
        
        long long int mod=1e9+7;
        
        for(long long i=0;i<n;i++)
            sum=sum+(a[i]*i);
        
        int ans=(int)(sum%mod);
        
        return ans;
    }
