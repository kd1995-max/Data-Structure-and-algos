int minJumps(int arr[], int n){
        // Your code here
        if(n == 1 and arr[0] == 0)
        return 0;
        
        if(arr[0] == 0)
        return -1;
        
       
        
        int maxReachable , jumps  , stepsPossible ;  

        maxReachable = arr[0] ; 
        jumps = 1 ; 
        stepsPossible = arr[0] ; 
    
        for(int i = 1 ; i<n ; i++)
        {
            if(i==n-1) return jumps ;  
            
            maxReachable = max(maxReachable , i+arr[i]);
    
            stepsPossible-- ; 
    
            if(stepsPossible==0)
            {
                jumps++ ; 
                if(i>=maxReachable) return -1;
                stepsPossible = maxReachable - i ; 
            }
        }
    }
