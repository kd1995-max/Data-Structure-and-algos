int lengthOfLIS(vector<int>& arr) 
    {
        int n = arr.size();
         vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    
        for(int ind = n-1; ind>=0; ind --){
            for (int prev_index = ind-1; prev_index >=-1; prev_index --){

                int notTake = 0 + dp[ind+1][prev_index +1];

                int take = 0;

                if(prev_index == -1 || arr[ind] > arr[prev_index]){

                    take = 1 + dp[ind+1][ind+1];
                }

                dp[ind][prev_index+1] = max(notTake,take);

            }
        }

        return dp[0][0];
    }
