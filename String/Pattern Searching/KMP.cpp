void computeLPSArray(string pat, int M, int* lps) 
{ 
	// Your code here
	int len = 0;
	lps[0] = 0;
	int i = 1;
	while(i < M)
	{
	    
	    if(pat[i] == pat[len])
	    {
	        
	        len++;
	        lps[i] = len;
	        i++;
	        
	    }
	    else
	    {
	        
	        if(len == 0)
	        {lps[i] = 0;i++;}
	        else
	        len = lps[len - 1];
	        
	    }
	    
	}
} 

//Function to check if the pattern exists in the string or not.
bool KMPSearch(string pat, string txt) 
{
    // Your code here
    if(pat.length() == 0)
    return false;
    int m = pat.length();
    int n = txt.length();
    int lps[m];
    computeLPSArray(pat , m , lps);
    int j = 0, i = 0;
    while(i < n)
    {
        
        if(txt[i] == pat[j])
        {
            
            i++ ; 
            j++ ;
            
        }
        
        if(j == m)
        {
            
            return true;
            
        }
        else if(i < n && txt[i] != pat[j])
        {
            
            if(j == 0)
            i++;
            else
            j = lps[j - 1];
            
        }
        
    }
    
    return false;
}
