int minValue(string s, int k){
        // code here
        unordered_map<char,int> m;
        
        for(auto a : s)
        {
            m[a]++;
        }
        
        priority_queue<int> pq;
        
        for(auto a : m)
        {
            pq.push(a.second);
        }
        
        while(k != 0)
        {
            int x = pq.top();
            pq.pop();
            x--;
            pq.push(x);
            k--;
        }
        
        int sum = 0;
        
        while(!pq.empty())
        {
            int num = pq.top();
            sum += num*num;
            pq.pop();
        }
        
        return sum;
    }
