class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(n == 1)
            return 1;
        
        unordered_map<int,int> umap;
        
        for(auto a:trust)
        {
            umap[a[0]] -=1;
            umap[a[1]] +=1;
        }
        
        for(auto a : umap)
        {
            if(a.second == (n-1))
                return a.first;
        }
        
        return -1;
    }
};
