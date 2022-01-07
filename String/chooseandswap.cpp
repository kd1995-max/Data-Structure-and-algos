string chooseandswap(string a){
        // Code Here
        set<int> s;
        
        for(int i = 0; i < a.length(); i++)
        {
            s.insert(a[i]);
        }
        
        for(int i = 0; i < a.length(); i++)
        {
            s.erase(a[i]);
            
            if(s.empty())
            break;
            
            char ch1 = *s.begin();
            
            if(ch1 < a[i])
            {
                char ch2 = a[i];
                
                for(int j = 0; j < a.length(); j++)
                {
                    if(a[j] == ch1)
                    a[j] = ch2;
                    else if(a[j] == ch2)
                    a[j] = ch1;
                }
                
                break;
            }
        }
        
        return a;
    }
