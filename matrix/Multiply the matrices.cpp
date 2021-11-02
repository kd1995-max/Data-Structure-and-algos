vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        vector<vector<int>> vec;
        if(A[0].size()!=B.size())
        return {};
    
        for(int j=0;j<A.size();j++)
        {
           vector<int> t;
           
           for(int i=0 ; i<B[0].size();i++)
           {
               int temp = 0;
               
               for(int c=0;c<B.size();c++)
               {
                   temp+=A[j][c]*B[c][i];
               }
               
               t.push_back(temp);
           }
           vec.push_back(t);
        }
           return vec;
    }
