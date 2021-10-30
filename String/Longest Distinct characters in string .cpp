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
