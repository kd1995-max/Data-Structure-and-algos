bool isSafe(int row, int col, vector<int>& curr, int n)
    {
        //row check
        for(int i = 0; i<col; i++)
        {
            if(row+1 == curr[i])
                return false;
        }
        
        int copyRow=row;
        int copyCol=col;
        
        //upper diagonal check
        while(row>0 and col>0)
        {
            row--; col--;
            
            if(curr[col] == row+1)    
            return false;
        }
        
        col = copyCol;
        row = copyRow;
        
        //lower diagonal check
        while(row<n and col>0)
        {
            row++; col--;
            if(curr[col] == row+1)    
            return false;
        }
        
        return true;
    }

    void func(int col, vector<int>& curr, vector<vector<int>>& ans, int n)
    {
        if(col == n)
        {
            ans.push_back(curr);
            return;
        }
        
        for(int row = 0; row<n; row++)
        {
            if(isSafe(row, col, curr, n))
            {
                curr.push_back(row+1);
                func(col+1, curr, ans, n);
                curr.pop_back();
            }
        }
    }

    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
        vector<int> curr;
        
        func(0, curr, ans, n);
        
        return ans;
    }
