 long long factorial(int N) {
        // Your code here
        long long res=1;
        while(N)
        {
            res= res * N;
            N--;
        }
        
        return res;
    }
