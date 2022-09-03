int smallestSumSubarray(vector<int>& a){
      //Code here
      int n = a.size();
      int mini = INT_MIN;
      int sum = 0;
      
      for(int i = 0; i < n; i++)
      {
          a[i] = -a[i];
      }
      
      for(int i = 0; i < n; i++)
      {
          sum += a[i];
          
          mini = max(mini,sum);
          
          if(sum < 0)
          sum = 0;
      }
      
      return (-1 * mini);
  }
