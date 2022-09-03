    int solve(int i , int arr[], int n)
    {
        if(i == n - 1)    
        return 0;
        
        int ans = INT_MAX - 5;
        
        for(int s = 1; i < n && s <= arr[i]; s++)
        {
            int jump = solve(s + i, arr, n) + 1;
            
            ans = min(ans , jump);
        }
        
        return ans;
    }
    
    int minJumps(int arr[], int n){
        // Your code here
        return solve(0,arr,n);
    }
