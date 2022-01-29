class Solution{
    public:
    int solve(int i , int j , string s,vector<vector<char>>&ch,int size,int idx)
    {
        int found = 0;
        if(i >= 0 and j >= 0 and i < ch.size() and j < ch[0].size() and s[idx] == ch[i][j])
        {
            char temp = s[idx];
            ch[i][j] = 0;
            idx += 1;
            if(idx == size)
            found = 1;
            else
            {
                found += solve(i + 1, j , s , ch , size , idx);
                found += solve(i - 1, j , s , ch , size , idx);
                found += solve(i, j + 1, s , ch , size , idx);
                found += solve(i, j - 1, s , ch , size , idx);
            }
            ch[i][j] = temp;
        }
        return found;
    }
    
    int findOccurrence(vector<vector<char> > &ch, string s){
        
        int ans = 0;
        int idx = 0;
        for(int i = 0; i < ch.size(); i++)
        {
            for(int j = 0; j < ch[0].size(); j++)
            {
                ans += solve(i,j,s,ch,s.size(),idx);
            }
        }
        
        return ans;
    }
};
