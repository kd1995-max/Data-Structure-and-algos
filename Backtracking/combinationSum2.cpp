 void solve(vector<int>nums, int pos,int target,vector<int>temp,vector<vector<int>>&result)
    {
        if(target<0)
        {
            return;
        }
        if (target==0)
        {
            result.push_back(temp);
            return;
        }

        for (int i = pos; i < nums.size(); i++)
        {
            if(i>pos&&nums[i]==nums[i-1])
            {
                continue;
            }
            if(nums[i]>target)
            {
                break;
            }
            temp.push_back(nums[i]);
            solve(nums, i+1,target-nums[i],temp,result);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int k)
    {
        long long sum=0;
        vector<vector<int>>res;
        
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
        if(k>sum)
        {
            return res;
        }
        vector<int> temp;
        sort(nums.begin(),nums.end());
        solve(nums,0,k,temp,res);
        return res;  
    }
