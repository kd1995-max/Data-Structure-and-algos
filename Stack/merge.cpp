class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merInt;
        
        if(intervals.size() == 0)
            return {};
        
        sort(intervals.begin(),intervals.end());
        
        vector<int> tempMer = intervals[0];
        for(auto it : intervals)
        {
            if(it[0] <= tempMer[1])
                tempMer[1] = max(it[1] , tempMer[1]);
            else
            {
                merInt.push_back(tempMer);
                tempMer = it;
            }
        }
        merInt.push_back(tempMer);
        
        return merInt;
    }
};
