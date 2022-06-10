class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
        sort(s.begin() , s.end());
        
        string ans;
        
        string a = s[0];
        string b = s[s.size() - 1];
        int i = 0;
        while(i < a.length())
        {
            if(a[i] == b[i])
            {
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                break;
            }
        }
        
        return ans;
        
    }
};
