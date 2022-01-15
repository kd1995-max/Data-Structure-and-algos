int lcs(string str1, string str2)
{
    int n = str1.length();
    int m = str2.length();
    
    int dp[n + 1][m + 1];
    
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            if(i == 0 || j == 0)
            dp[i][j] = 0;
        }
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(str1[i - 1] == str2[j - 1])
            dp[i][j] = dp[i - 1][j - 1] + 1;
            else
            dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
        }
    }
    
    return dp[n][m];
}
int longestPalinSubseq(string str) {
    //code here
    string a = str;
    reverse(str.begin(), str.end());
    int res = lcs(a,str);
    return res;
}
int minDeletions(string str, int n) 
{ 
    // if we want to minimize deletion then we must need to have the longest palindrome
    //hence substracting the current string length with the longest palindromic subsequence will 
    //give the result
    return n - longestPalinSubseq(str);
} 
