    int maxProfit(int k, int n, int Arr[]) 
    {
        // code here
        //  int n = Arr.size();
        
         vector<vector<vector<int>>> dp(n+1,
                                vector<vector<int>> 
                                        (2,vector<int>(k + 1,0)));
                                        
    
        for(int ind = n-1; ind>=0; ind--){
            for(int buy = 0; buy<=1; buy++){
                for(int cap=1; cap<=k; cap++){
                    
                    if(buy==1){
                        dp[ind][buy][cap] = max(0+dp[ind+1][1][cap], 
                                    -Arr[ind] + dp[ind+1][0][cap]);
                    }
                    else{
                        dp[ind][buy][cap] = max(0+dp[ind+1][0][cap],
                                    Arr[ind] + dp[ind+1][1][cap - 1]);
                    }
                }
            }
        }
    
    
    return dp[0][1][k];
    }
