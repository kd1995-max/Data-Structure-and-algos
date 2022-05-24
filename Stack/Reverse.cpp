queue<int> q;
    void solve(stack<int> st,vector<int> &ans)
    {
        if(st.empty())    
        return;
        
        int x = st.top();
        st.pop();
        q.push(x);
        
        solve(st,ans);
        
        int a = q.front();
        q.pop();
        ans.push_back(a);
    }
    vector<int> Reverse(stack<int> St){
        vector<int> ans;
        
        solve(St,ans);
        
        return ans;
    }
