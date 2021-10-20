long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long,vector<long long>,greater<long long>> pq(arr,arr + n);
        
        long long Total_cost = 0;
        
        while(pq.size() > 1)
        {
            long long current_cost = 0;
            
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            
            current_cost = first + second;
            pq.push(current_cost);
            
            Total_cost += current_cost;
        }
        
        return Total_cost;
    }
