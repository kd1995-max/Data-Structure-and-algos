string longestPalin (string s) {
        // code here
        
        int l , h;
        int start = 0, end = 1;
        
        for(int i = 1; i < s.length(); i++)
        {
            //even
            l = i - 1;
            h = i;
            
            while(l >= 0 and h <= s.length() and s[l] == s[h])
            {
                if(h - l + 1 > end)
                {
                    start = l;
                    end = h - l + 1;
                }
                
                l--;
                h++;
            }
            
            //odd
            l = i - 1;
            h = i + 1;
            
            while(l >= 0 and h <= s.length() and s[l] == s[h])
            {
                if(h - l + 1 > end)
                {
                    start = l;
                    end = h - l + 1;
                }
                
                l--;
                h++;
            }
        }
        
        return s.substr(start , end);
    }
