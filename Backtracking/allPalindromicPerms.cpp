bool isPalin(string s)
    {
        int l=0;
        int r=s.length()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    void solve(string str,vector<string>temp,vector<vector<string>>&ans)
    {
        if(str.length()==0)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<str.length();i++)
        {
            string prefix=str.substr(0,i+1);
            string rest=str.substr(i+1);
            if(isPalin(prefix))
            {
                temp.push_back(prefix);
                solve(rest,temp,ans); 
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> allPalindromicPerms(string s) {
        // code here
         vector<vector<string>>ans;
        vector<string>temp;
        solve(s,temp,ans);
        return ans;
    }
