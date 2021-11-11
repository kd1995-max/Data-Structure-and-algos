void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        for(int i =0; i < n-1; i+=2)
        {
            swap(arr[i],arr[i+1]);
        }
    }
