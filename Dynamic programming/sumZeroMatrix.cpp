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
  vector<vector<int>> sumZeroMatrix(vector<vector<int>> mat){
     // as question if area is same what we have to do 
     // means either more column will be preferable or more row..here more column is preferable
     int n = mat.size();
     int m = mat[0].size();
     
     int up,down;
     int maxArea = INT_MIN;
     vector<int> final(4); //  up down left right
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
                final = {up,down,left,right};
            }
         }
     } 
     
     if(maxArea == INT_MIN) 
     return {{-1}};
     
     int upp = final[0], downn = final[1],leftt = final[2], rightt = final[3];
     
     vector<vector<int>> ans;
     
     for(int i=upp; i <= downn; i++)
     {
         vector<int> temp;
         for(int j=leftt; j <= rightt; j++)
         {
             temp.push_back(mat[i][j]);
         }
         ans.push_back(temp);
     }
     return ans;
  }
