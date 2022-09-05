#include <iostream>
using namespace std;
/* Iterative Function to calculate (x^y)%p
in O(log y) */
unsigned long long power(unsigned long long x,
                                  int y, int p)
{
    unsigned long long res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0)
    {
     
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n, 
                                            int p)
{
    return power(n, p - 2, p);
}
 
// Returns nCr % p using Fermat's little
// theorem.
unsigned long long nCrModPFermat(unsigned long long n,int r, int p)
{

    if (n < r)
        return 0;
        
    if (r == 0)
        return 1;
 
    unsigned long long fac[n + 1];
    fac[0] = 1;
    
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p* modInverse(fac[n - r], p) % p)% p;
}
int main() {
	//code
	int T;
	cin >> T;
	int mod = 1e9 + 7;
	
	while(T--)
	{
	    int n;
	    cin >> n;
	    
	    unsigned long int nCr = nCrModPFermat(2*n,n,mod);
	    
	    cout << nCr*modInverse(n+1,mod)%mod<<endl;
	}
	return 0;
}
