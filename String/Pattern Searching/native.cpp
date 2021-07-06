bool search(string pat, string txt) 
    { 
    	
    	// Your code here
    	for(int i = 0; i <= txt.length() - pat.length(); i++)
    	{
    	    int j;
    	    for(j = 0; j < pat.length(); j++)
    	    {
    	        if(pat[j] != txt[j + i])
    	        break;
    	    }
    	    if(j == pat.length())
    	    return true;
    	}
        return false;	
    }
