void solve(vector<int>nums, int pos,int target,vector<int>temp,vector<vector<int>>&result)
    {
        if (target==0)
        {
            result.push_back(temp);
            return;
        }

        for (int i = pos; i < nums.size(); i++)
        {
            if(i>0 && nums[i] == nums[i-1]  and i > pos )
            {
                continue;
            }
            if(nums[i]>target)
            {
                break;
            }
            temp.push_back(nums[i]);
            solve(nums, i ,target-nums[i],temp,result);
            temp.pop_back();
        }
    }
    vector<vector<int> > combinationSum(vector<int> &nums, int k) 
    {
        // Your code here
        vector<vector<int>>res;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        solve(nums,0,k,temp,res);
        return res; 
    }
