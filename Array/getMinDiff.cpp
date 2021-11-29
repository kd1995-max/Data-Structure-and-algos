int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int res = arr[n - 1] - arr[0];
        
        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;
        
        int mi , ma;
        
        for(int i = 0; i < n - 1; i++)
        {
            mi = min(arr[i + 1] - k , smallest);
            ma = max(arr[i] + k , largest);
            
            if(mi < 0)
            continue;
            
            res = min(res, ma - mi);
        }
        return res;
    }
