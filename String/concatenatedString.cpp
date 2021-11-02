string concatenatedString(string S1, string S2) 
    { 
        // Your code here
        int counts1[256] = {0};
        int counts2[256] = {0};
        
        for(auto a : S1)
        {
            counts1[a]++;
        }
        
        for(auto a : S1)
        {
            counts1[a]++;
        }
        
        for(auto a : S2)
        {
            counts2[a]++;
        }
        
        string str = "";
        
        for(auto a : S1)
        {
            if(counts2[a] == 0)
            str += a;
        }
        
        for(auto a : S2)
        {
            if(counts1[a] == 0)
            str += a;
        }
        
        return (str=="") ? "-1" : str;
    }
