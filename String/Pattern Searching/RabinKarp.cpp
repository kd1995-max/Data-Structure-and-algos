bool search(string pat, string txt, int q) 
{ 
	//d = 256  q = 101
	//n is the length of txt and m is the length of pat 
	int n = txt.length(); 
	int m = pat.length();
	
	//calculate d^(pat.length() - 1)
	int h = 1;
	for(int i = 1; i <= m - 1; i++)
	    h = (h * d)%q;
	    
	//calculate the first windows
	//horners rule
	int t = 0, p = 0; //'t' will store the hash code of txt and 'p' will store the hash code of pat
	for(int i = 0; i < m; i++)
	{
	    t = (t * d + txt[i])%q;
	    p = (p * d + pat[i])%q;
	}
	
	//calculate the hits
	for(int i = 0; i <= n - m; i++)
	{
	    
	    //if hash code of 'p' and 't' matches 
	    if(p == t)
	    {
	        bool IsPattern = true;
	        
	        for(int j = 0; j < m; j++)
	        {
	           // if there doesn't exist a pattern the IsPattern = false
	            if(txt[i + j] != pat[j]) 
	            {IsPattern = false ; break;}
	        }
	        
	        //if the pattern exist return true
	        if(IsPattern == true)
	        return true;
	    }
	    
	    if(i < n - m)
	    {
	        t = ( (d*( t - txt[i]*h )) + txt[ i + m])%q;
	        
	        if(t < 0)
	        t = t + q;
	    }
	    
	}
	
	return false;
} 
