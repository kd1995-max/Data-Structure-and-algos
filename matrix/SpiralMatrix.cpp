vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int top = 0, left = 0 , bottom = r - 1, right = c - 1;
        vector<int> vec;
        while(left <= right && top <= bottom)
        {
            for(int i = left; i <= right; i++ )
            {
                vec.push_back(matrix[top][i]);
            }
            top++;

            for(int i = top; i <= bottom; i++)
            {
                vec.push_back(matrix[i][right]);
            }
            right--;
            
            for(int j = right; j >= left; j-- )
            {
                vec.push_back(matrix[bottom][j]);
            }
            bottom--;
            

            for(int i = bottom; i >= top; i--)
            {
                vec.push_back(matrix[i][left]);
            }
            left++;
            
        }
        
        while(vec.size() > r*c)
        vec.pop_back();
        
        return vec;
    }
