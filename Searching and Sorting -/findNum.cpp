int findZero(int count)
        {
            int zeros = 0;
            int p = 5;
            
            while(count/p > 0)
            {
                zeros += count/p;
                p *= 5;
            }
            
            return zeros;
        }
        
        int findNum(int n)
        {
        //complete the function here
            if(n == 1)
            return 5;
            
            int low = 0 , high = 5*n;
            
            while(low < high)
            {
                
                int mid = (low + high)/2;
                
                if(findZero(mid) < n)
                low = mid + 1;
                
                else if(findZero(mid) >= n)
                high = mid;
                
            }
            
            return low;
        }
