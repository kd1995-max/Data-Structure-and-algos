const int CHAR = 256;
    bool areSame(int FP[] , int FT[])
    {
        for(int i = 0; i < CHAR; i++)
        if(FP[i] != FT[i]) return false;
        
        return true;
    }
	int search(string pat, string txt) {
	    // code here
	    int count = 0;
	    int FP[CHAR]={0} , FT[CHAR]={0};
	    
	    for(int i = 0; i < pat.length(); i++)
	    {
	        FP[pat[i]]++;
	        FT[txt[i]]++;
	        
	    }
	    
	    if(areSame(FP,FT))
	        count++;
	       
	    for(int i = pat.length(); i < txt.length(); i++)
	    {
	       
	        FT[txt[i]]++;
	        FT[txt[i - pat.length()]]--;
	        
	        if(areSame(FP,FT))
	        count++;
	        
	    }
	 
	    return count;
	}
