int kadens(vector<int> &vec)
    {
        int n = vec.size();
        int maxi = INT_MIN;
        int sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            sum += vec[i];
            
            maxi = max(sum , maxi);
            
            if(sum < 0)
            sum = 0;
        }
        
        return maxi;
    }
    int maximumSumRectangle(int R, int C, vector<vector<int>> mat) {
        // code here
        int res = INT_MIN;
        
        for(int i = 0; i<R;i++)
        {
            vector<int> vec(C);
            for(int j = i; j<R;j++)
            {
                for(int col = 0; col < C; col++)
                {
                    vec[col] += mat[j][col];
                }
                
                int temp = kadens(vec);
                res = max(res,temp);
            }
        }
        
        return res;
    }
