class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    
    
    int largestPowerOf2InRange(int n)
    {
        int x = 0;
        
        while((1 << x) <= n)
        x++;
        
        return x - 1;
    }
    
    int countSetBits(int n)
    {
        // Your logic here
        if(n == 0)
        return 0;
        
        int x = largestPowerOf2InRange(n);
        
        int btill2x = x * (1 << (x - 1));
        
        int msb2xtox = n - (1 << x) + 1;
        
        int rest = n - (1 << x);
        
        int ans = btill2x + msb2xtox + countSetBits(rest);
        
        return ans;
    }
};
