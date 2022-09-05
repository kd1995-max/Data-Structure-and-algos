//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
    long long int numTrees(long long int n) 
    {
        // Your code here
        vector<long> dp(n+1,0);
        
        dp[0] = 1;
        dp[1] = 1;
        
        for(long long int i = 2; i <= n; i++)
        {
            dp[i] = 0;
            for(long long int j = 0; j < i; j++)
            {
                dp[i] = (dp[i] + dp[j]* dp[i - j - 1]);
            }
        }
        
        return dp[n];
    }
};

//{ Driver Code Starts.

int main(){
    

        long long int n;
        cin>>n;
        // n=n/2;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    
}	
// } Driver Code Ends
