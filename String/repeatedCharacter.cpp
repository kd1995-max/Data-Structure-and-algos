int repeatedCharacter (string s) 
    { 
        //Your code here
        bool visited[256];
        fill(visited,visited+256,false);
        int res = -1;
        for(int i = s.length() - 1; i >= 0; i--)
        {
            if(!visited[s[i]])
            visited[s[i]] = true;
            else
            res = i;
        }
        
        return res;
    } 
