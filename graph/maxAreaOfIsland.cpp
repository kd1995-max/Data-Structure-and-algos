// Leetcode
bool isValid(int i , int j,vector<vector<int>> &mat,int n,int m)
    {
        if(i >= 0 and i < n and j >= 0 and j < m and mat[i][j] == 1)
        return true;
        
        return false;
    }
    
    void dfs(int i , int j, vector<vector<int>> &mat,int n , int m,int &count)
    {
        mat[i][j] = 0;
        
        if(isValid(i,j-1,mat,n,m))
        {
            count++;
            dfs(i,j-1,mat,n,m,count);
            
        }
        
        if(isValid(i-1,j,mat,n,m))
        {
            count++;
            dfs(i-1,j,mat,n,m,count);
        }
        
        if(isValid(i,j+1,mat,n,m))
        {
            count++;
            dfs(i,j+1,mat,n,m,count);
        }
        
        if(isValid(i+1,j,mat,n,m))
        {
            count++;
            dfs(i+1,j,mat,n,m,count);
        }
    }
    
    int maxAreaOfIsland(vector<vector<int>>& mat) 
    {
        
        int countOnes = 0;
        int islands = 0;
        
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0; i < n; i++)
        {
            countOnes = 0;
            
            for(int j = 0; j < m; j++)
            {
                countOnes = 0;
                
                if(mat[i][j] == 1)
                {
                    countOnes++;
                    dfs(i , j , mat , n , m , countOnes);
                    islands = max(countOnes , islands);
                }
            }
        }
        
        return islands;
    }

// GFG - OLD
bool isValid(int i , int j,vector<vector<int>> &mat,int n,int m)
    {
        if(i >= 0 and i < n and j >= 0 and j < m and mat[i][j] == 1)
        return true;
        
        return false;
    }
    
    void dfs(int i , int j, vector<vector<int>> &mat,int n , int m,int &count)
    {
        mat[i][j] = 0;
        
        if(isValid(i,j-1,mat,n,m))
        {
            count++;
            dfs(i,j-1,mat,n,m,count);
        }
        
        if(isValid(i-1,j-1,mat,n,m))
        {
            count++;
            dfs(i-1,j-1,mat,n,m,count);
        }
        
        if(isValid(i-1,j,mat,n,m))
        {
            count++;
            dfs(i-1,j,mat,n,m,count);
        }
        
        if(isValid(i-1,j+1,mat,n,m))
        {
            count++;
            dfs(i-1,j+1,mat,n,m,count);
        }
        
        if(isValid(i,j+1,mat,n,m))
        {
            count++;
            dfs(i,j+1,mat,n,m,count);
        }
        
        if(isValid(i+1,j+1,mat,n,m))
        {
            count++;
            dfs(i+1,j+1,mat,n,m,count);
        }
        if(isValid(i+1,j,mat,n,m))
        {
            count++;
            dfs(i+1,j,mat,n,m,count);
        }
        if(isValid(i+1,j-1,mat,n,m))
        {
            count++;
            dfs(i+1,j-1,mat,n,m,count);
        }
        
    }
    
    int findMaxArea(vector<vector<int>>& mat) 
    {
         int countOnes = 0;
        int islands = 0;
        
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0; i < n; i++)
        {
            countOnes = 0;
            
            for(int j = 0; j < m; j++)
            {
                countOnes = 0;
                
                if(mat[i][j] == 1)
                {
                    countOnes++;
                    dfs(i , j , mat , n , m , countOnes);
                    islands = max(countOnes , islands);
                }
            }
        }
        
        return islands;
    }
// =================
// GFG New

void dfs(vector<vector<int>>& grid, int i , int j, int rows, int cols, int &area) 
{
        if(i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == 0)
        return;
            
        grid[i][j] = 0; // visited
        
        ++area;
        
        dfs(grid, i + 1, j, rows, cols, area);
        dfs(grid, i - 1, j, rows, cols, area);
        dfs(grid, i, j + 1, rows, cols, area);
        dfs(grid, i, j - 1, rows, cols, area);
        dfs(grid, i + 1, j + 1, rows, cols, area);
        dfs(grid, i - 1, j + 1, rows, cols, area);
        dfs(grid, i + 1, j - 1, rows, cols, area);
        dfs(grid, i - 1, j - 1, rows, cols, area);
    }
    
int findMaxArea(vector<vector<int>>& grid) 
{
        int rows = grid.size();
        int cols = grid[0].size();
        
        int mxArea = 0;
        
        for(int i = 0; i < rows; ++i) 
        {
            for(int j = 0; j < cols; ++j) 
            {
                if(grid[i][j] == 1) 
                {
                    int area = 0;
                    dfs(grid, i, j, rows, cols, area);
                    mxArea = max(mxArea, area);
                }
            }
        } 
        return mxArea;
}
