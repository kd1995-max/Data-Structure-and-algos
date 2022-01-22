void interchangeRows(vector<vector<int> > &matrix)
    {
        // code here 
        int n = matrix.size();
        
        for(int i = 0; i < n/2; i++)
        {
            swap(matrix[i] , matrix[n - 1 - i]);    
        }
    }
