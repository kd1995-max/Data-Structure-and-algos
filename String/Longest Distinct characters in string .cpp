int longestSubstrDistinctChars (string s)
{
    // your code here
    int n = s.length();
    vector<int> prev(256 , -1);
    int i = 0;
    int res = 0;
    for(int j = 0; j < n; j++)
    {
        i = max(i , prev[s[j]] + 1);
        int maxEnd = j - i + 1;
        res = max(res,maxEnd);
        prev[s[j]] = j;
    }
    return res;
}

//
int longestSubstrDistinctChars (string str)
{
    // your code here
    int start = -1, maxLen = 0;
    vector<int> dic(256,-1);
    
    for(int i = 0; i < str.length(); i++)
    {
        if(dic[str[i]] > start)    
        start = dic[str[i]];
        
        dic[str[i]] = i;
        
        maxLen = max(maxLen, i - start);
    }
    return maxLen;
}
