	vector<string> AllPossibleStrings(string s){
		    // Code here
		    
		    vector<string> str;
		    int n = s.length();
		  //  int powSize = pow(2 , n);
		    for(int counter = 0; counter < (1<<n); counter++)
		    {
		        string res="";
		        for(int j = 0; j < n; j++)
		        {
		            if( counter & (1<<j) )
		            {
		                res+=s[j];
		            }
		        }
		        if(res!="")
		        {
		            str.push_back(res);
		        }
		    }
		    
		    sort(str.begin(),str.end());
		    
		    return str;
		}
