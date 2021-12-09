int inSequence(int A, int B, int C){
        // code here
        if(C==0){
           if(A==B)
               return 1;
           else
               return 0;
       }
  
       int n = 1 + (B-A)/C;
       return ((B-A)%C == 0 && n>0);
    }
