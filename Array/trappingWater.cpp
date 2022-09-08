int trappingWater(int arr[], int n){
        // Code here
        int res = 0;
        int left[n];
        int right[n];
 
        //left array
        left[0] = arr[0];
        for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1] , arr[i]);
 
        //right array
        right[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1] , arr[i]);
 
        // calculate 
        for (int i = 0; i < n; i++)
        {
            res += (min(left[i] , right[i]) - arr[i]);
        }
        return res;
    }


//Optimized
long long trappingWater(int arr[], int n){
        // code here
        long long leftMax = 0;
        long long rightMax = 0;
        long long res = 0;
        int l = 0, r = n - 1;
        
        while(l <= r)
        {
            if(arr[l] <= arr[r])
            {
                if(arr[l] >= leftMax)
                {
                    leftMax = arr[l];
                }
                else
                {
                    res += leftMax - arr[l];
                }
                
                l++;
            }
            else
            {
                if(arr[r] >= rightMax)
                {
                    rightMax = arr[r];
                }
                else
                {
                    res += rightMax - arr[r];
                }
                
                r--;
            }
        }
        
         return res;
    }
    
