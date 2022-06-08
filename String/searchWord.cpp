bool solve(int i, int j, int idx, vector<vector<char>> &grid, int m, int n, string &word, int size, string dir) {
		bool found = false;

		if(i>=0 && j>=0 && i<m && j<n && grid[i][j] == word[idx]) {
			char temp = grid[i][j];
			
			grid[i][j] == '.';

			idx++;
			
			if(idx == size) 
			{
				found = true;
			} 
			else 
			{
				if(dir == "none") 
				{
					bool right = solve(i, j+1, idx, grid, m, n, word, size, "right");
					
					bool down = solve(i-1, j, idx, grid, m, n, word, size, "down");
					
					bool left = solve(i, j-1, idx, grid, m, n, word, size, "left");
					
					bool up = solve(i+1, j, idx, grid, m, n, word, size, "up");
					
					bool rightDown = solve(i+1, j-1, idx, grid, m, n, word, size, "rightDown");
					
					bool rightUp = solve(i+1, j+1, idx, grid, m, n, word, size, "rightUp");
					
					bool leftDown = solve(i-1, j-1, idx, grid, m, n, word, size, "leftDown");
					
					bool leftUp = solve(i-1, j+1, idx, grid, m, n, word, size, "leftUp");
					
					found = right || down || left || up || rightDown || rightUp || leftDown || leftUp;
			    } 
			    
			    else if(dir == "right") 
			    {
					found = solve(i, j+1, idx, grid, m, n, word, size, "right");
			    }
			    else if(dir == "down") 
			    {
					found = solve(i-1, j, idx, grid, m, n, word, size, "down");
			    } 
			    else if(dir == "left") 
			    {
					found = solve(i, j-1, idx, grid, m, n, word, size, "left");
			    } 
			    else if(dir == "up") 
			    {
					found = solve(i+1, j, idx, grid, m, n, word, size, "up");
			    } 
			    else if(dir == "rightDown") 
			    {
					found = solve(i+1, j-1, idx, grid, m, n, word, size, "rightDown");
			    } 
			    else if(dir == "rightUp") 
			    {
					found = solve(i+1, j+1, idx, grid, m, n, word, size, "rightUp");
			    } 
			    else if(dir == "leftDown") 
			    {
					found = solve(i-1, j-1, idx, grid, m, n, word, size, "leftDown");
			    } 
			    else if(dir == "leftUp") 
			    {
					found = solve(i-1, j+1, idx, grid, m, n, word, size, "leftUp");
			    }
			}

			grid[i][j] = temp;
		}

		return found;
	}

	vector<vector<int>> searchWord(vector<vector<char>> &grid, string &word){
	    int size = word.size();
	    int m = grid.size();		//rows
	    int n = grid[0].size();		//columns

	    vector<vector<int>> ans;
	    
	    for(int i=0; i<m; i++) {
	    	for(int j=0; j<n; j++) {
	    		bool found = solve(i, j, 0, grid, m, n, word, size, "none");
	    		if(found) {
	    			ans.push_back({i,j});
	    		}
	    	}
	    }

	    return ans;
	}
