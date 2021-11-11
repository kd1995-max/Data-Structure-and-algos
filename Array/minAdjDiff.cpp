int minAdjDiff(int arr[], int n){    
        // Your code here
        int min_Diff = INT_MAX;
        
        for(int i = 1; i < n; i++)
        {
            min_Diff = min(min_Diff, abs(arr[i] - arr[i - 1]));
        }
        
        min_Diff = min(min_Diff, abs(arr[n - 1] - arr[0]));
        
        return  min_Diff;
    }
