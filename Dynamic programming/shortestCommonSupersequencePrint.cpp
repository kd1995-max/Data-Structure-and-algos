class Solution {
public:
    string shortestCommonSupersequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        
        int dp[n+1][m+1];
        
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
                if(text1[i-1] == text2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }

        int i = n, j = m;
        string str;
        while(i > 0 && j > 0)
        {
		    /* If the characters corresponding to current cell (i, j) in text1 and text2 are same, 
			then the character is part of shortest supersequence. 
			We append it in output string and move diagonally to next cell (i.e. (i - 1, j - 1)).*/
            if(text1[i-1] == text2[j-1])
            {
                str.push_back(text1[i-1]);
                i--;
                j--;
            }
			// If current character in text1 and text2 are different/
            else if(dp[i-1][j] > dp[i][j-1])
            {
                str.push_back(text1[i-1]);
                i--;
            }
            else
            {
                str.push_back(text2[j-1]);
                j--;
            }
        }
		/* If string text2 reaches its end i.e. j = 0, we add remaining
            characters of string text1 in the output string*/
        while(i > 0)
        {
            str.push_back(text1[i-1]);
            i--;
        }
		/* If string text1 reaches its end i.e. i = 0, we add remaining
            characters of string text2 in the output string*/
        while(j > 0)
        {
            str.push_back(text2[j-1]);
                j--;
        }
        
        reverse(str.begin(), str.end());
        return str;
    }
};
