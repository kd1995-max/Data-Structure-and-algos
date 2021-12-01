long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(), a.end());
        
        long long start = 0;
        long long end = m - 1;
        
        int res = INT_MAX;
        
        while(end < n)
        {
            if( res > (a[end] - a[start]) )
            res = (a[end] - a[start]);
            
            start++;
            end++;
        }
        
        return res;
    }   
