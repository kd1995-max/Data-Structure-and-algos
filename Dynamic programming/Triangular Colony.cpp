#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
lli power(lli x,lli y)
{
	lli res = 1;
    x = x % mod; 
	while (y > 0) 
	{
		if (y & 1)
			res = (res * x) % mod;
		y = y >> 1; 
		x = (x * x) %mod;
	}
	return res;
}

lli modInverse(lli n,lli p)
{
	return power(n, p- 2);
}
int main()
{
    lli t;
    cin>>t;
    lli fac[200002];
	fac[0] = 1;
	for (int i = 1; i <=200001; i++)
	 fac[i] = (fac[i - 1] * i) % mod;
    while(t--)
    {
        lli n;
        cin>>n;
        lli c=(fac[2*n] * modInverse(fac[n], mod) % mod*modInverse(fac[n], mod) % mod)% mod;
        c=(c*modInverse(n+1, mod)%mod)%mod;
        cout<<c<<endl;
    }
    return 0;
}
