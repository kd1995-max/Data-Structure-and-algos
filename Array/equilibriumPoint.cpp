int equilibriumPoint(long long a[], int n) {
    
       int total_sum = accumulate(a, a+n, 0);
        
        int pre_sum = 0;
        for(int i = 0; i < n; i++) {
        if(pre_sum == total_sum - pre_sum - a[i]) {
            return i + 1;
        }
        pre_sum += a[i];
        }
        
        return -1;
    }
