int findPosition(int N) {
        // checking corner cases and checking power of two
        if(N==0 || (N&(N - 1)) != 0)
        return -1;
        
        N = (N & (~(N -1)));
        
        int count = 0;
        while(N)
        {
            count++;
            
            if(N == 1)
            break;
            
            N >>= 1;
        }
        
        return count;
    }
