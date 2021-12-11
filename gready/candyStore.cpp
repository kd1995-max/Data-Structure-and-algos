 vector<int> candyStore(int candies[], int n, int k)
    {
        // Write Your Code here
        sort(candies , candies + n);
        
        int ma = 0;
        int mi = 0;
        
        int l = 0;
        int r = n - 1;
        
        while(l <= r)
        {
            mi += candies[l];
            l++;
            r = r - k;
        }
        
        reverse(candies , candies + n);
        
        l = 0;
        r = n - 1;
        
        while(l <= r)
        {
            ma += candies[l];
            l++;
            r = r - k;
        }
        
        return {mi , ma};
    }
