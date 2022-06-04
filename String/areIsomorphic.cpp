 bool areIsomorphic(string s1, string s2)
    {
        
        // Your code here
    unordered_map<char, int>m1;
      unordered_map<char, int>m2;
      
      if(s1.length()!=s2.length()){
          return false;
      }
      
       for(int i=0; i<s1.length(); i++){
           m1[s1[i]]++;
           m2[s2[i]]++;
       }
       
       for(int j = 0; j<s1.length(); j++){
         if(m1[s1[j]] != m2[s2[j]])
             return false;
     }
     
     return true;
    }
