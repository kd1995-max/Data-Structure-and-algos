class Solution {
public:
    int numDistinct(string s1, string s2) 
    {
        int n = s1.length();
        int m = s2.length();
        
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=m;i++){
            dp[0][i]=0;
        }

        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){

                if(s1[i-1]==s2[j-1])
                    dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%1000000000;
                else
                    dp[i][j] = dp[i-1][j];
            }
        }


        return dp[n][m];
    }
};
