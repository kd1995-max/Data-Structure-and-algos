//https://www.geeksforgeeks.org/calculate-ncr-using-pascals-triangle/#:~:text=Approach%3A%20The%20idea%20is%20to,of%20n%20elements%20is%200

int nCr(int n, int k){
        // code here
        if(n < k)
        return 0;
        
        int mod = 1e9 + 7;
        
        int C[n + 1][k + 1];
        int i, j;
     
        for (i = 0; i <= n; i++) {
            for (j = 0; j <= min(i, k); j++) {
                // Base Cases
                if (j == 0 || j == i)
                    C[i][j] = 1;

                else
                    C[i][j] = (C[i - 1][j - 1]%mod + C[i - 1][j]%mod)%mod;
            }
        }
     
        return C[n][k];
    }
