	unsigned long long int powm(unsigned long long int x,unsigned long long int n,unsigned long long int M){
		    unsigned long long int result=1;
		    
		    while(n>0)
		    {
		        if(n % 2 == 1)
		            result=(result * x)%M;
		            
		        x=(x*x)%M;
		        
		        n=n/2;
		    }
		    return result;
	}
   	int Nth_term(int a, int r, int n){
   		unsigned long long int mod = 1e9 + 7;
   		
   		unsigned long long int res = powm(r, n-1, mod);
   		
   		res *= a;
   		res %= mod;
   		return int(res);
   	}      
