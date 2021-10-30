const long long mod = 1000000007;
    
    long long  factorial(long long  n)
    {
       if(n==0||n==1){
           return 1;
       }
       return (n*factorial(n-1))%mod ;
    }
    int findRank(string S) 
    {
        //Your code here
        long long res=1;
        long long  n=S.length();
        int count[256]={0};
       for(int i=0;i<n;i++)
       {
        
        //for repeting
          if(count[S[i]]==1){
              return 0;
          }
           count[S[i]]++;
           
       }
       
        for(int i=1;i<256;i++)
        {
           count[i]+=count[i-1];   
        }
        
        for(int i=0;i<n-1;i++)
        {
            res=res+(count[S[i]-1]*factorial(n-i-1))%mod;
            res%=mod;
            for(int j=S[i];j<256;j++)
            {
               count[j]--;
            }
        }  
    
    return res%mod;
    }
