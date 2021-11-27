bool checkRotatedAndSorted(int arr[], int n){
        
        // Your code here
        int count = 0;
        
        if(arr[0] > arr[n-1])
        {
            for(int i = 0; i < n; i++)
            {
                if(arr[i] >= arr[(i + 1)%n])
                count++;
            }
        }
        else if(arr[0] < arr[n - 1])
        {
            for(int i = 0; i < n; i++)
            {
                if(arr[i] <= arr[(i + 1)%n])
                count++;
            }
        }
        
        if(count != 1)
        return false;
        
        return true;
        
    }
