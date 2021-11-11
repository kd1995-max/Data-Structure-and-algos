 vector<int> largestAndSecondLargest(int n, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
        
        for(int i = 0; i < n; i++)
        {
            if(max < arr[i])
            {
                max = arr[i];
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            if(max == arr[i])
            {
                arr[i] = -1;
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            if(max2 < arr[i])
            {
                max2 = arr[i];
            }
        }
        
        return {max,max2};
    }
