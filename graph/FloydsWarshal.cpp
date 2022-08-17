	void shortest_distance(vector<vector<int>>& mat){
	    // Code here
	    int n = mat.size();
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            if(mat[i][j]==-1) mat[i][j] = INT_MAX;
	        }
	    }
	    
	    for(int k = 0; k < n; k++){
	        for(int i = 0; i < n; i++){
	            for(int j = 0; j < n; j++){
	            
	                if(mat[i][k]!=INT_MAX && mat[k][j]!=INT_MAX && mat[i][k]+mat[k][j]<mat[i][j]){
	                    mat[i][j] = mat[i][k]+mat[k][j];
	                }
	            
	            }
	        }
	    }
	    
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            if(mat[i][j]==INT_MAX) mat[i][j] = -1;
	        }
	    }
	    
	}
