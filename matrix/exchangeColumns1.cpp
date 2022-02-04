class Solution
{
    public:
    //Function to exchange first column of a matrix with its last column.
    void exchangeColumns(vector<vector<int> > &matrix)
    {
        // code here
        int i = 0;
        for(auto a : matrix)
        {
            vector<int> vec = a;
            swap(vec[0] , vec[matrix[0].size() - 1]);
            matrix[i++] = vec;
        }
    }
};
