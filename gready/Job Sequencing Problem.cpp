static bool comp(Job a, Job b)
	{
		return a.profit > b.profit;
	}
	vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
		sort(arr , arr + n , comp);
		bool done[n] = {0};
        int profit = 0 ,days = 0;

        for(int i = 0; i < n; i++)
        {
				for(int k = min(n , arr[i].dead - 1); k >=0; k--)
				{
					if(done[k] == false)
					{
						profit += arr[i].profit;
                		days++;
						done[k] = true;
						break;
			
					}
				}            
        }
        
        return {days , profit};
    } 
