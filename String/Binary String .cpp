long binarySubstring(int n, string a){
        
        // Your code here
        long long count = 0;
        
        for(long long i = 0; i < n; i++)
        if(a[i] == '1')
        count++;
        
        return count*(count-1)/2;
    }
