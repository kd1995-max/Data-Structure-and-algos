int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    int sum=accumulate(arr,arr+n,0); //0LL
	    bool dp[n+1][sum+1];
	    vector<int>s1(sum/2);
	    
	    int mn=INT_MAX;
	    
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=sum;j++)
	        {
	            if(i==0)
	            dp[i][j]=false;
	            if(j==0)
	            dp[i][j]=true;
	        }
	    }
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=sum;j++)
	        {
	            if(arr[i-1] <= j)
	                dp[i][j]=dp[i-1][j-arr[i-1] ]|| dp[i-1][j];
	            else
	                dp[i][j]=dp[i-1][j];
	        }
	    }
	    for(int i=0;i<=sum/2;i++)
	    {
	        if(dp[n][i])
	        s1.push_back(i);
	    }
	    for(int i=0;i<s1.size();i++)
	   {
	       mn=min(mn,sum-2*s1[i]);
	   }
	   return mn;
	} 
