bool check_sum(vector<int> &temp, int &up, int &down, int k){
      
      unordered_map<int,int> mp;
      mp[0] = -1;
      int sum = 0;
      int maxLen = 0;
      
      for(int i = 0; i < temp.size(); i++)
      {
          sum += temp[i];
          
          if(mp.find(sum-k) != mp.end())
          {
              if(i-mp[sum-k] > maxLen)
              {
                  maxLen = i - mp[sum-k];
                  up = i - maxLen + 1; // just think about it
                  down = i;
              }
          }
          
          else mp[sum] = i;
      }
      return (maxLen != 0);
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
             
            bool sum = check_sum(temp,up,down,0);
            
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
