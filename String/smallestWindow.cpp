string smallestWindow (string s, string p)
    {
        // Your code here
        unordered_map<char,int> mp;
        for(auto it: p){
            mp[it]++;
        }
        int count=mp.size();
        int i=0,j=0,len=INT_MAX;
        pair<int,int> ans;
        string str="";
        while(j<s.length()){
            
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0)
                   count--;
            }
            if(count==0){
                while(count==0){
                    // find the start & end point of a string.
                    if(j-i+1 < len)
                    {
                        len=j-i+1;
                        ans={i,len};
                    }
                    if(mp.find(s[i])!=mp.end()){
                        mp[s[i]]++;
                        if(mp[s[i]]==1)
                           count++;
                    }
                     i++;
                }
            }
            j++;
        }
        
        return len==INT_MAX?"-1":s.substr(ans.first, ans.second);
    }
