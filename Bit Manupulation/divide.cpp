class Solution {
public:
    int divide(int dividend, int divisor) {
        long long int n = dividend;
        long long int m = divisor;
        
        int sign = (n < 0 ^ m < 0) ? -1 : 1 ;
        
        n = abs(n);
        m = abs(m);
        
        long long int q = 0;
        long long int t = 0;
        
        for(long long i = 31; i >= 0; i--)
        {
            if(t + (m << i) <= n)
            {
                t += (m << i);
                
                q = q | (1LL << i);
            }
        }
        
        if(sign < 0)
            q = -q;
        
        return (q >= INT_MAX || q < INT_MIN)? INT_MAX : q ;
    }
};
