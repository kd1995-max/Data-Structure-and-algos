string FirstNonRepeating(string A){
		    // Code here
		    vector<int> vis(26,0);
		    string res="";
		    vector<char> seq;
		    int n = A.length();
		    
		    for(int i = 0; i < n; i++)
		    {
		        if(!vis[A[i] - 'a'])
		        {
		            seq.push_back(A[i]);   
		        }
		        
		        vis[A[i] - 'a']++;
		        int f = 0;
		        int m = seq.size();
		        
		        for(int j = 0; j < m; j++)
		        {
		            if(vis[seq[j] - 'a'] == 1)
		            {
		                res.push_back(seq[j]);
		                f = 1;
		                break;
		            }
		        }
		        
		        if(f == 0)
		        res.push_back('#');
		        
		    }
		    
		    return res;
		}
