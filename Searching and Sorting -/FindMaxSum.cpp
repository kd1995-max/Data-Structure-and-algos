class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int res[10001];
    
    int solve(int i , int arr[])
    {
        if(i <= -1)
        return 0;
        
        if(res[i] != -1)
        return res[i];
        
        int op1 = arr[i] + solve(i - 2, arr);
        int op2 = solve(i - 1, arr);
        
        return res[i] = max(op1 , op2);
    }
    
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        memset(res,-1,sizeof(res));
        return solve(n - 1, arr);
    }
};
