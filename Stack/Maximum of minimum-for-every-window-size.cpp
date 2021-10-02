 vector <int> maxOfMin(int arr[], int n)
    {
        //right
        stack<int> s;
        vector<int> r(n);
        for(int i = n - 1; i >= 0; i--){
            int x = n;
            while(!s.empty() and arr[s.top()] >= arr[i]) s.pop();
            if(!s.empty()) x = s.top();
            r[i] = x;
            s.push(i);
        }
        
        //left
        while(!s.empty())
        s.pop();
        
        vector<int> l(n);
        for(int i = 0; i < n; i++){
            while(!s.empty() and arr[s.top()] >= arr[i]) s.pop();
            if(s.empty()) l[i]  =  -1;
            else l[i] =s.top();
            s.push(i);
        }
        
        vector<int> ans(n + 1);
        
        for (int i=0; i<=n; i++)
            ans[i] = 0;
            
        for(int i = 0; i < n; i++)
        {
             int len = r[i] - l[i] - 1;
             
              ans[len-1] = max(ans[len-1], arr[i]);
        }
        
        for (int i=n-1; i>=1; i--)
        ans[i] = max(ans[i], ans[i+1]);
        
        //removing zero from back
        ans.pop_back();
        
        return ans;
    }
