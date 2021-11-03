char nonrepeatingCharacter(string S)
    {
       //Your code here
       
       int count[256];
       fill(count , count + 256 , -1);
       int res = INT_MAX;
       
       for(int i = 0; i < S.length(); i++)
       {
           if(count[S[i]] == -1)
           count[S[i]] = i;
           else
           count[S[i]] = -2;
       }
       
       for(int i = 0; i < 256; i++)
       {
           if(count[i] >= 0)
           res = min(res , count[i]);
       }
       
       return (res != INT_MAX) ? S[res] : '$' ;
    }
