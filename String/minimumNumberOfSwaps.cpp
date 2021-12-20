int minimumNumberOfSwaps(string s){
        // code here 
       int open = 0 , close = 0 ,fault = 0,res = 0;
   
       for(auto a : s)
       {
           if(a == ']')
           {
               close++;
               fault = close - open;
           }
           else
           {
               open++;
               if(fault > 0)
               {
                   res += fault;
                   fault--;
               }
           }
       }
        return res;
    }
