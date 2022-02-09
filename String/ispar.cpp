 bool ispar(string x)
    {
        stack<char> st;
        for(auto a : x)
        {
            if(a=='['||a=='('||a=='{')
            {
                st.push(a);
            }
            else
                {
     
                    if(st.empty()) return false;
                        if( st.top() == '[' and a == ']') 
                        {
                            st.pop();
                        }
                        else if(st.top() == '(' and a == ')') 
                        {
                            st.pop();
                        }
                        else if(st.top() == '{' and a == '}') 
                        {
                            st.pop();
                        }
                        else
                        {
                            return false;
                        }                   
     
            }
        }
        return st.empty() == true;

    }
