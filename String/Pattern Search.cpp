void fillLPS(string str, int* lps)
    {
        int n=str.length(),len=0;
    lps[0]=0;
    int i=1;
    while(i<n){
        if(str[i]==str[len])
        {len++;lps[i]=len;i++;}
        else
        {if(len==0){lps[i]=0;i++;}
            else{len=lps[len-1];}
        }
    }
    }
    
    bool search(string pat, string txt) 
    { 
    	// Your code here
    	int N=txt.length();
        int M=pat.length();
        
        int lps[M];
        fillLPS(pat,lps);
        int i=0,j=0;
        
        while(i<N)
        {
            if(pat[j]==txt[i]){i++;j++;}
    
            if (j == M) { 
                return true;
            } 
            else if (i < N && pat[j] != txt[i]) { 
                if (j == 0) 
                    i++;
                else
                    j = lps[j - 1];  
            }
        }
    
        return false;
    } 
