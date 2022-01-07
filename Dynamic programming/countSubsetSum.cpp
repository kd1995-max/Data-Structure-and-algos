#include<bits/stdc++.h>
using namespace std;

int countSubsetSum(int arr[], int n, int sum)
{
    int dp[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if(i == 0)
            dp[i][j] = 0;
            
            if(j == 0)
            dp[i][j] = 1;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= sum; j++)
        {
            if(arr[i - 1] > j)
            dp[i][j] = dp[i - 1][j];
            else
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
        }
    }
    
    return dp[n][sum];
}

int main(int argc, char const *argv[])
{
    int arr[] = {3 , 34 , 4 , 12 , 5 , 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 9;

    cout << countSubsetSum(arr, n, sum);
    return 0;
}
