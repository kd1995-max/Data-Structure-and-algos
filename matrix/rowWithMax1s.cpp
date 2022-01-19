int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	      if(n==0)
            return 0;
            
            int row=0,col=m-1;
            int maxRow=-1;
            while(row<n and col>=0)
            {
                if(arr[row][col]==1)
                {
                    maxRow=row;
                    col--;
                }
                else
                row++;
            }
            return maxRow;
	}
