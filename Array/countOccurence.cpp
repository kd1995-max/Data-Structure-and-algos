      int countOccurence(int arr[], int n, int k) 
      {
     // Your code here
        unordered_map<int , int> um;
        
        for(int i = 0; i < n; i++)
        um[arr[i]]++;
        int count = 0;
        for(auto a : um)
        {
            if(a.second > n/k)
            count++;
        }
        
        return count;
    }
