char getMaxOccuringChar(string str)
    {
        // Your code here
        int count[256] = {0};
        
        int max_ = INT_MIN;
        char res = 0;
        for(auto a : str)
            count[a]++;
        
        
        for(int i = 0; i < str.size(); i++)
        {
            if(count[str[i]] > max_)
            {
                res = str[i];
                max_ = count[str[i]];
            }
            else if(count[str[i]] == max_) 
            {
                if(res > str[i]) res = str[i];
            }
        }
        
        
        return res;
    }
