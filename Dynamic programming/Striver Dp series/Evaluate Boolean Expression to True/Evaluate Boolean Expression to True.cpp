#define mod 1003
    int solve(int i,int j,int isTrue,string S,int N,vector<vector<vector<int>>> &dp){
        
        // base case
        if(i > j)   return 0;
        if( i == j ){
            if(isTrue){
                return (S[i] == 'T');
            }
            else
                return (S[i] == 'F');
        }
        
        if(dp[i][j][isTrue] != -1)  return dp[i][j][isTrue];
        
        int ways=0;
        // exlplore
        for(int ind=i+1;ind <= j-1;ind+=2){
            int lt= solve(i,ind-1,1,S,N,dp);
            int lf=solve(i,ind-1,0,S,N,dp);
            int rt=solve(ind+1,j,1,S,N,dp);
            int rf=solve(ind+1,j,0,S,N,dp);
            
            if(S[ind] == '&'){
                if(isTrue){
                   ways=(ways + (lt * rt)%mod)%mod; 
                }
                else{
                    ways=(ways+ (lf*rf)%mod+(lf*rt)%mod+(rf*lt)%mod)%mod;
                }
            }
            else if (S[ind] == '|'){
                if(isTrue){
                    ways=(ways+ (lt*rt)%mod+(lt*rf)%mod+(lf*rt)%mod)%mod;
                }
                else{
                    ways=(ways+(lf*rf)%mod)%mod;
                }
            }
            else{
                if(isTrue){
                    ways=(ways+ (lf*rt)%mod+(lt*rf)%mod)%mod;
                }
                else{
                    ways=(ways+(lt*rt)%mod+(lf*rf)%mod)%mod;
                }
            }
            
        }
        return dp[i][j][isTrue] = ways;
        
    }
    int countWays(int N, string S){
        int size=S.size();
        vector<vector<vector<int>>> dp(N,vector<vector<int>>(N,vector<int>(2,-1)));
        return solve(0,size-1,1,S,N,dp);
    }
