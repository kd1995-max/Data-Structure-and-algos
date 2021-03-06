vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    
    
        queue< long long int > q;
        vector< long long int > v;
        
        for(long long int i = 0; i < K; i++){
            
            if(A[i] < 0)
                q.push(A[i]);
            
        }    
        
        if(q.size() == 0)
            v.push_back(0);
        
        else
            v.push_back(q.front());
        
        long long int l=0;
        long long int r=K;    
        
        while(r < N)
        {
            if(q.front() == A[l])
                q.pop();
            
            l++;
            
            if(A[r] < 0)
                q.push(A[r]);
            
            if(q.size() == 0)
                v.push_back(0);
            
            else
                v.push_back(q.front());
            
            r++;
        }
        
        return v;
 }
