void floodFillRec(vector<vector<int>>& image, int i, int j, int n , int m, int newColor,int color)
    {
       if(i < 0 || i >= n || j < 0 || j >= m || image[i][j] != color)         
       return;
       
       image[i][j] = newColor;
       
       floodFillRec(image,i-1,j,n,m,newColor,color);
       floodFillRec(image,i,j+1,n,m,newColor,color);
       floodFillRec(image,i+1,j,n,m,newColor,color);
       floodFillRec(image,i,j-1,n,m,newColor,color);
       
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int n = image.size();
        int m = image[0].size();
        
        int color = image[sr][sc];
        
        if(color == newColor)
        return image;
        
        floodFillRec(image,sr,sc,n,m,newColor,color);
        
        return image;
        
    }
