void solve(vector<string> &ans,string &res,string str,vector<int> &freq)
	{
	    if(res.size() == str.size())
	    {
	        ans.push_back(res);
	        return;
	    }
	    
	    for(int i = 0; i < str.length(); i++)
	    {
	        if(!freq[i])
	        {
	            res.push_back(str[i]);
	            freq[i] = 1;
	            solve(ans,res,str,freq);
	            freq[i] = 0;
	            res.pop_back();
	        }
	    }
	}
	
		vector<string>find_permutation(string str)
		{
		    // Code here there
		    vector<string> ans;
		    string res="";
		    vector<int> freq(str.length(),0);
		    
		    solve(ans,res,str,freq);
		    
		    return ans;
		}
