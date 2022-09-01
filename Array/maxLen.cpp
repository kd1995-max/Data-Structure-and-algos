int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
        
        int sum = 0;
        int maxi = 0;
        
        unordered_map<int,int> um;
        
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            
            if(sum == 0)
            maxi = i + 1;
            
            else
            {
                if(um.find(sum) != um.end())
                {
                    maxi = max(maxi , i - um[sum]);
                }
                else
                {
                    um[sum] = i;
                }
            }
            
        }
        
        return maxi;
    }
