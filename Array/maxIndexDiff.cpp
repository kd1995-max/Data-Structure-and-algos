int maxIndexDiff(int arr[], int n) 
    { 
        // Your code here
        int low = 0, high = n - 1, res=INT_MIN;
        
        while(low <= high)
        {
            if(arr[low] <= arr[high])
            {
                int diff = high - low;
                res = max(res,diff);
                low++;
                high = n - 1;
            }
            else
            high--;
        }
        
        return res;
    }
