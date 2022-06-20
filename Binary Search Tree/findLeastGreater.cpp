vector<int> findLeastGreater(vector<int>& arr, int n) {
         set <int> s;
       vector <int> v(n,0);
       
       for(int i = n-1 ; i>=0 ; i--)
       {
           auto it = s.upper_bound(arr[i]);
           if(it == s.end())
               v[i] = -1;
           else
               v[i] = *it;
           s.insert(arr[i]);
       }
       return v;
    }
