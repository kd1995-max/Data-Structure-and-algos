string reverseWords(string S) 
    { 
        string cpy = S;
        
        cpy.push_back('.');
        
        stack<string> st;
        
        int len = 0;
        int idx = 0;
        for(int i = 0; i < cpy.length();i++)
        {
            
            if(cpy[i] == '.')
            {
                st.push(cpy.substr(idx , len));
                len = 0;
                idx = i + 1;
            }
            
            len++;
        }
        
        string str = "";
        
        while(!st.empty())
        {
            str += st.top();
            st.pop();
        }
        
        return str;
    }
