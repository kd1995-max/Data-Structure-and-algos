bool isFesible(int arr[], int n, int k, int mid)
    {
        int student = 1;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > mid)
            return false;
            
            sum += arr[i];
            if(sum > mid)
            {
                student++;
                sum =arr[i];
                
            }
            if(student > k)
                return false;
        }
        
        return true;
    }
    int findPages(int arr[], int n, int m) 
    {
        //code here
        int sum = 0;
        
        if(n < m)
        return -1;
        
        for(int i = 0; i < n; i++)
        sum += arr[i];
        
        int start = 0, end  = sum , ans = INT_MAX;
        while(start <= end)
        {
            int mid = (start + end)/2;
            if(isFesible(arr , n , m , mid))
            {
                end = mid - 1;
                ans = min(ans,mid);
            }
            else
            {
                start = mid + 1;
            }
        }
        
        return ans;
    }
