bool isIsogram(string s)
    {
        //Your code here
        int count[256] = {0};
        
        for(int i = 0; i < s.length(); i++)
        {
            count[s[i]]++;
            
            if(count[s[i]] > 1)
            return false;
        }
        
        return true;
    }
