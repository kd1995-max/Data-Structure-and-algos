    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        unordered_set<string> st;
        
        for(int i = 0; i < wordList.size(); i++)
        {
            st.insert(wordList[i]);
        }
        
        if(st.find(targetWord) == st.end())
        return 0;
        
        queue<string> q;
        q.push(startWord);
        int depth = 0;
        
        while(!q.empty())
        {
            depth++;
            int levelLength = q.size();
            
            while(levelLength--)
            {
                string curr = q.front();
                q.pop();
                
                for(int i = 0; i < curr.length(); i++)
                {
                    string temp = curr;
                    for(char c = 'a'; c < 'z'; c++)
                    {
                        temp[i] = c;
                        
                        if(curr == temp)
                        continue;
                        
                        if(temp == targetWord)
                        return depth + 1;
                        
                        if(st.find(temp) != st.end())
                        {
                            q.push(temp);
                            st.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
