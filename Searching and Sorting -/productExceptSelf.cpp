vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        //code here
        if(n == 1)
        return {1};
        
        long long left[n];
        long long right[n];
        
        left[0] = nums[0];
        
        for(long long i = 1; i < n; i++ )
            left[i] = left[i - 1]*nums[i];
        
        
        right[n - 1] = nums[n - 1];
        
        for(long long i = n - 2; i >= 0; i-- )
            right[i] = right[i + 1]*nums[i];
        
        
        vector<long long> res(n);
        
        res[0] = right[1];
        
        for(long long i = 1; i < n-1; i++)
            res[i] = left[i-1]*right[i+1];
        
        res[n - 1] = left[n-2];
        
        return res;
    }
