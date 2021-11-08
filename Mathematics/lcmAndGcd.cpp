long long gcd(long long a , long long b)
    {
        if(b == 0)    
        return a;
        else
        return gcd(b , a%b);
    }
    
    long long lcm(long long  a,long long b)
    {
        return (a * b)/gcd(a,b);
    }
    
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        
        return {lcm(A,B),gcd(A,B)};
    }
