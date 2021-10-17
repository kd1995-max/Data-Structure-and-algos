int countBitsFlip(int a, int b){
        
        // Your logic here
        int N = a ^ b;
        
        int count = 0;
        while(N)
        {
            int ls = (N & (~(N -1)));
            if(ls == 1)
            count++;
            
            N >>= 1;
        }
        
        return count;
    }
