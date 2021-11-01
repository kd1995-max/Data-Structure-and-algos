vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        //dimension of both matrix must be equal
        if(!(A.size() == B.size() and A[0].size() == B[0].size())) return{};
        
        vector<vector<int>> vec;
        
        for(int i = 0; i < A.size(); i++)
        {
            vector<int> temp(B[0].size());
            
            for(int j = 0; j < B[0].size(); j++)
            {
                temp[j] = A[i][j] + B[i][j];
            }
            vec.push_back(temp);
        }
        
        return vec;
    }
