string findSubString(string str)
    {
        // Your code goes here 
        unordered_map<char , int> m;
        for(auto a : str)
            m[a]++;
        
        int n = m.size();
        m.clear();
        int i = 0;
        int j = 1;
        
        m[str[i]]++;
        
        int c = 0;
        c++;
        
        int res = INT_MAX;
        string ans = "";
        while(i <= j and j < str.length())
        {
            if(c < n)
            {
                if(m[str[j]] == 0)
                c++;
                
                m[str[j]]++;
                
                j++;
            }
            else if(c == n)
            {
                if(res > j - i)
                {
                    res = j - i;
                    ans = str.substr(i, j - i);
                }
                
                if(m[str[i]] == 1) c--;
                
                m[str[i]]--;
                
                i++;
            }
        }
        
        while(c == n)
        {
            if(res > j - i)
            {
                res = j - i;
                ans = str.substr(i, j - i);
            }
            
            if(m[str[i]] == 1) c--;
            
            m[str[i]]--;
            
            i++;
        }
        
        return ans;
    }
