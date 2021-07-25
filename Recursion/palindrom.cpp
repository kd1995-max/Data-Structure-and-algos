	int i = 0 , j = 0;
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	   if(i == 0)
	    j = S.length() - 1;
	    
	   while(i < j)
	   {
	       if(S[i] != S[j])
	       return 0;
	       
	       i++;
	       j--;
	   }
	   
	   return 1;
	}
