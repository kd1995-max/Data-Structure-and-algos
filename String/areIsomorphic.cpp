bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        int a[256] = {0};
        int b[256] = {0};
        
        if(str1.length() != str2.length())
        return false;
        
        for(int i = 0; i < str1.length(); i++)
        {
            a[str1[i]]++;
            b[str2[i]]++;
            
            if(a[str1[i]] != b[str2[i]])
            return false;
        }
        
        return true;
    }
