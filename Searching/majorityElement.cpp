int majorityElement(int arr[], int n)
    {
        
        // your code here
        int count = 1 , res = 0;
        for(int i = 1; i < n; i++)
        {
            if(arr[res] == arr[i])
            count++;
            else
            count--;
            if(count == 0)
            res = i , count = 1;
        }
        count = 0;
        for(int i = 0; i < n; i++)
        if(arr[res] == arr[i])
        count++;
        
        if(count <= n/2) return -1;
        
        return arr[res];
    }
