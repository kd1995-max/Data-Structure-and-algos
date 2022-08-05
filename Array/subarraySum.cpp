vector<int> subarraySum(int arr[], int n, int s)
    {
        if(n == 1 && arr[0] == s)
        return {1 , 1};
	
        else if(n == 1 && arr[0] != s)
        return {-1};
 
	int sum = arr[0] , start = 0 , end;
         
        for ( end = 1; end <= n; end++)
        {
            while(sum > s && start < end - 1)
            {
            	sum -= arr[start];
            	start++;
            }

            if (sum == s)
            {                
                return {start + 1,end};
            }

            if(end < n)
            sum += arr[end];
        }
        return {-1};
    }
