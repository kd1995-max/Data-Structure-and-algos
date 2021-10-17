 vector<int> twoOddNum(int arr[], int n)  
    {
        // code here
        int xors = 0, res1 = 0, res2 = 0;
        
        for(int i = 0; i < n; i++)
        xors ^= arr[i];
        
        int sn = xors & (~(xors - 1));
        
        for(int i = 0; i < n; i++)
        {
            if((arr[i] & sn) != 0)
            res1 ^= arr[i];
            else
            res2 ^= arr[i];
        }
        
        return {max(res2, res1),min(res2, res1)};
    }
