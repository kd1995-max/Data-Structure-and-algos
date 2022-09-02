#include<bits/stdc++.h>
bool maxLen(vector<int> &temp, int &up, int &down)
    {   
        // Your code here
        map<int, int> presum;
        int sum = 0; 
        
            int max_length = 0;
        
            for (int i = 0; i < temp.size(); i++)
            {
                sum += temp[i];
        
                
                if (sum == 0)
                {
                    if (max_length < i + 1)
                    {
                        up = 0;
                        down = i;
                    }
                    max_length = i + 1;
                }
        
                
                if (presum.find(sum) != presum.end())
                {
        
                    int old = max_length;
        
                    max_length = max(max_length, i - presum[sum]);
        
                    if (old < max_length)
                    {
                        down = i;
                        up = presum[sum] + 1;
                    }
                }
                else
                    presum[sum] = i;
            }
        
        
            return (max_length != 0);
    }    
  int sumZeroMatrix(vector<vector<int>> mat){
     
     int n = mat.size();
     int m = mat[0].size();
     
     int up,down;
     int maxArea = 0;
      
     for(int left = 0; left <m; left++)
     {
         vector<int> temp(n);
         for(int right = left; right < m; right++)
         {
             
             for(int i = 0; i<n; i++)
             {
                 temp[i] += mat[i][right];
             }
             
            bool sum = maxLen(temp,up,down);
            
            int area = (down - up + 1)*(right - left + 1);
            
            if(sum and area > maxArea)
            {
                maxArea = area;
            }
         }
     } 
      
     return maxArea;
  }
int maximumArea(vector<vector<int>>& mat, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(mat[i][j] == 0)
                mat[i][j] = -1;
        }
    }
    
    return sumZeroMatrix(mat);
}
