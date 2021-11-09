int lps(string s) {
	    // Your code goes here
	    int n=s.length();
	    int len=0;
	    int fill[n]={0};
	    
	    int i=1;
	    while(i<n)
	    {
	        if(s[i]==s[len])
	        {
	            len++;
	            fill[i]=len;
	            i++;
	        }
	        else
	        {
	            if(len==0)
	            {
	                fill[i]=0;
	                i++;
	            }
	            else
	            {
	                len=fill[len-1];
	            }
	        }
	    }
	      
	     return fill[n - 1];

	}
