class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    

    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        
        vector<int> vec;
        for(int i = 0; i < matrix.size(); i++)      
        {
            if(i%2 == 0){
                for(int j = 0; j<matrix.size(); j++){
                  vec.push_back(matrix[i][j]);
                }
            }
            else{
                for(int j = matrix.size() - 1; j >= 0; j-- ){
                    vec.push_back(matrix[i][j]);
                }
                
            }
        }
        return vec;
    }
};      
