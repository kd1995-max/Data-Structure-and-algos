int mod = 1e9 + 7;
class Solution{
public:
   int solve(int n,int r,vector<vector<int>> &dp){
       // base case
       if(n < r){
           return 0;
       }
       
       if(r == 0 || r == n){
           return 1;
       }
       
       if(dp[n][r] != -1){
           return dp[n][r];
       }
       // NCR means selecting the r objects from n objects
       
       // case 1 : we selected the 1 object from the n object than
       int taken = solve(n-1,r-1,dp);
       
       // case 2 : we leave the 1st object form the n object then
       int notTaken = solve(n-1,r,dp);
       
       dp[n][r] = (taken + notTaken) % mod;
       
       return dp[n][r];
       
   }
   

   int nCr(int n, int r){
       vector<vector<int>> dp(n+1,vector<int>(r+1,-1));
       return solve(n,r,dp);
   }
};
