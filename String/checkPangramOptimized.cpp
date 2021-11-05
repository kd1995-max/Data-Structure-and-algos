bool checkPangram (string &s) {
        // your code here
         transform(s.begin(),s.end(),s.begin(),::tolower);
        bool present[26]={false};
        for(auto x :s){
            if(isalpha(x)){
                 present[x-'a']=1;
            }

        }
        for(int i=0;i<26;i++){
            if(present[i]==0){
                return 0;
            }
        }
    return 1;
    }
