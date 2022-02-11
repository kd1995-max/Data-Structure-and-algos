string removeConsecutiveCharacter(string S)
    {
        // code here.
        stack<char> st;
        for(auto a:S)
            st.push(a);
        
        string ans;

        ans.push_back(st.top());
        st.pop();

        while(!st.empty())
        {
            if(st.top()!=ans.back())
                ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        
        return ans;
    }
