int lengthOfLIS(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> dp(n+1 , 1);
        
        for(int curr = 0; curr < n; curr++)
        {
            for(int prev = 0; prev <= curr; prev++)
            {
                if(nums[prev] < nums[curr])
                {
                    dp[curr] = max(1 + dp[prev], dp[curr]);
                }
            }
        }
        
        int ans = -1;
    
        for(int i=0; i<=n-1; i++){
            ans = max(ans, dp[i]);
        }

        return ans;
    }

// Printing
    int lengthOfLIS(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> dp(n+1 , 1);
        vector<int> hash(n+1 , 1);        
        for(int curr = 0; curr < n; curr++)
        {
            hash[curr] = curr;
            for(int prev = 0; prev <= curr; prev++)
            {
                if(nums[prev] < nums[curr] and 1 + dp[prev] > dp[curr])
                {
                    dp[curr] = 1 + dp[prev];
                    hash[curr] = prev;
                }
            }
        }
        
        int ans = -1;
        int lastIndex = -1;
        
        for(int i=0; i<n; i++)
        {
            if(dp[i] > ans)
            {
                ans = dp[i];
                lastIndex = i;
            }
        }
        
        vector<int> temp;
        temp.push_back(nums[lastIndex]);
        
        while(hash[lastIndex] != lastIndex)
        {
            lastIndex = hash[lastIndex];
            temp.push_back(nums[lastIndex]);
        }
        
        reverse(temp.begin(),temp.end());
        return ans;
    }
