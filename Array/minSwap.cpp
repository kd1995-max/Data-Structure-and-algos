nt minSwap(int arr[], int n, int k) {
        // Complet the function
        int good = 0;
        int bad = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] <= k)
            good++;
        }
        
        for(int i = 0; i < good; i++)
        {
            if(arr[i] > k)
            bad++;
        }
        
        int start = 0;
        int end = good;
        
        int ans = bad;
        while(end < n)
        {
            if(arr[start] > k)
            bad--;
            
            if(arr[end] > k)
            bad++;
            
            ans = min(ans , bad);
            
            start++;
            end++;
        }
        
        return ans;
    }
