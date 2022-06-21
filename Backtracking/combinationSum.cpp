class Solution {
public:
        void solve(vector<vector<int>> &ans, int pos, vector<int> arr,int target, vector<int> &res)
    {
        if(target < 0)
        return;
        
        if(target == 0)
        {
            ans.push_back(res);
            return;
        }
        
        for(int i = pos; i < arr.size(); i++)
        {
            res.push_back(arr[i]);
            solve(ans,i,arr,target - arr[i],res);
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> res;
        vector<vector<int>> ans;
        solve(ans,0,arr,target,res);
        return ans;
    }
};
