#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> &arr , int k)
{
    vector<int> vec;
    int l = 0;
    for(int i=0;i<arr.size();i++)
    {
        int sum = arr[i];
        vec.push_back(sum);
        l++;

        for (int j = i + 1; j < arr.size(); j++)
        {
            l++;
            sum+=arr[j];
            vec.push_back(sum);
        }
        
    }

    sort(vec.begin(),vec.end());
    
    return vec[l-k];
}

int main(int argc, char const *argv[])
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    cout<< helper(arr,k) << endl;

    return 0;
}
