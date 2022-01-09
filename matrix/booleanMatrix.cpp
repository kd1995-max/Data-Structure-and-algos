void booleanMatrix(vector<vector<int> > &arr)
    {
        // code here 
        int n = arr.size();
        int m = arr[0].size();
        
        bool row_set[n];
        memset(row_set,false,sizeof(row_set));
        
        bool col_set[m];
        memset(col_set,false,sizeof(col_set));
        
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(arr[i][j])
                {
                    row_set[i] = true;
                    col_set[j] = true;
                }
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            if(row_set[i])
            {
                for(int j = 0; j < m; j++)
                {
                    arr[i][j] = 1;
                }
            }
        }
        
        for(int i = 0; i < m; i++)
        {
            if(col_set[i])
            {
                for(int j = 0; j < n; j++)
                {
                    arr[j][i] = 1;
                }
            }
        }
    }
