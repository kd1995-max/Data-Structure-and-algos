int equilibriumPoint(long long a[], int n) 
    {
        // Your code here
        int total_sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            total_sum += a[i];
        }
        
        int pre_sum = 0;
        for(int i = 0; i < n; i++)
        {
            int diff = abs(total_sum - a[i]);
            total_sum -= a[i];
            
            if(diff == pre_sum)
            return i + 1;
            
            pre_sum += a[i];
        }
        
        return -1;
    }
