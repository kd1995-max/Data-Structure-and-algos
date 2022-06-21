vector<string>find_permutation(string s)
		{
		    // Code here there
		    sort(s.begin() , s.end()) ;
            vector<string> permute;
           do{
              permute.push_back(s);
           }
           while( next_permutation( s.begin() , s.end() ) );
           
           return permute;
        }
