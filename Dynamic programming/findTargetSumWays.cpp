int subsetSum(vector<int>&a, int n, int sum)
    {
        int dp[n + 1][sum + 1];
     
        for (int i = 0; i <= sum; i++)
            dp[0][i] = 0;
        for (int i = 0; i <= n; i++)
            dp[i][0] = 1;
     
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
              
                if (a[i - 1] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - a[i - 1]]; 
                
                      
            }
        }
    
        return dp[n][sum];
    }
  
    int findTargetSumWays(vector<int>&arr ,int target) {
        //Your code here
        int n = arr.size();
        int sum=0;
        for(int i=0;i<n;i++)
             sum+=arr[i];
    	 
    	 if((target + sum)%2 != 0)
    	 return 0;
    	 
    	 int reqSum=(target+sum)/2;
    	 return subsetSum(arr,n,reqSum);
    }
