bool ispar(string x)
    {
        stack<char> st;
        for(auto a : x){
            if(a=='['||a=='('||a=='{'){
                st.push(a);
                continue;
            }
            else
                {
     
                    if(st.empty()) return false;
                        if(a == ']' && st.top() == '[') {st.pop();continue;}
                        if(a == ')' && st.top() == '(') {st.pop();continue;}
                        if(a == '}' && st.top() == '{') {st.pop();continue;}
                        else{
                            return false;
                        }                   
     
            }
        }
        return st.empty() == true;
    

    }
