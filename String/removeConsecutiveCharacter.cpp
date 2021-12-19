string removeConsecutiveCharacter(string str)
    {
        // code here.
        string ans;
        ans.push_back(str[0]);
        int count = 0;
        for(int i = 1; i < str.length(); i++)
        {
            
            if(ans[count] != str[i])
            {
                ans += str[i] ;
                
                count++;
            }
            
        }
        
        return ans;
    }
