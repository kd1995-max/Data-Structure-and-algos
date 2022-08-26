class Solution {
public:
    int findNumberOfLIS(vector<int>& a) {
	   int maxi=1;
	   int n = a.size();
        
	   vector<int> dp(n,1);
	   vector<int> count(n,1);
	   
       for(int i=0;i<n;i++)
       {
           
           for(int j=0;j<i;j++)
           {
               if(a[j]<a[i] and dp[j]+1 > dp[i])
               {
                   dp[i]=dp[j]+1;
                   count[i] = count[j];
               }
               else if(a[j]<a[i] and dp[j]+1 == dp[i])
               {
                   count[i] += count[j];
               }
           }
           
           maxi = max(maxi , dp[i]);
       }
       
       int nos = 0;
       for(int i = 0; i < n; i++)
       {
           if(dp[i] == maxi) 
           nos += count[i];
       }
       
       return nos;
    }
};
