vector <int> max_of_subarrays(int *arr, int n, int k)
    {
       // your code here
        deque<int> q;
        vector<int> res;
        
        for(int i=0; i<k; i++)
        {
            while(not q.empty() and q.back() < arr[i])
                q.pop_back();
                
            q.push_back(arr[i]);
        }
        
        res.push_back(q.front());
        
        int l = 0, r = k-1;
        
        while(1){
            if(q.front() == arr[l])
                q.pop_front();
            l++;
            r++;
            
            if(r == n)
                break;
                
            while(not q.empty() and q.back() < arr[r])
                q.pop_back();
                
            q.push_back(arr[r]);
            res.push_back(q.front());
        }
        
        return res;
    }
