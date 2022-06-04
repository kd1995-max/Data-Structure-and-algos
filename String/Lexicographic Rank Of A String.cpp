int findRank(string s) 
    {
        int m=1000000007;
       long long freq[256]={0};

     //Used an array to store all the possible factorials in advance
       long long fact[26];
       fact[0]=1;
       fact[1]=1;
       for(int i=2;i<26;i++)
       {
            //Make sure to store the mod of the factorials 
           fact[i]=(i*fact[i-1])%m;
       }
       for(int i=0;i<s.length();i++)
       {
        //Edge case for repeating character
           if(freq[s[i]]==1){
               return 0;
           }
           freq[s[i]]++;
       }
       long long res=0;
       for(int i=0;i<s.length();i++)
       {
           int cnt=0;
           for(int j=0;j<256;j++)
           {
               
               if(j==s[i])
               {
                   break;
               }
               
               if(freq[j]==1)
               {
                   cnt++;
               }
               
           }
           
           freq[s[i]]=0;
           res += ( cnt * fact[s.length()-i-1]) % m;
       }
       return res+1;
    }
