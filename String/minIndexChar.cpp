int minIndexChar(string str, string patt)
    {
        // Your code here
         // Your code here
        int n=str.length();
        
        for(int i=0; i<n; i++)
        {
            if(patt.find(str[i]) != string::npos)
            {
                return i;
            }
        }
        return -1;
    }
