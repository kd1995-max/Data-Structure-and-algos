int isValid(string s) 
        {
            s.push_back('.');
            int n = s.length();
            int len = 0;
            int idx = 0;
            int count = 0;
            int count_num = 0;
            
            for(int i = 0; i < n; i++)
            {
                if((s[i] >= 'a' and s[i] <= 'z') || (s[i]>='A' and s[i]<='Z'))
                return 0;
                
                if(s[i] == '.')
                {
                    count++;
                    string temp = s.substr(idx , len);
                    
                    if(temp.size() > 3)
                    return 0;
                    
                    if(len != 0)
                    {
                        int num = stoi(temp);
                        count_num++;
                        
                        string num_count = to_string(num);
                        
                        if(num < 0 || num > 255)
                        return 0; 
                        
                        if(temp.size() != num_count.size())
                        return 0;
                    }
                    len = 0;
                    idx = i + 1;
                }
                
                if(s[i] != '.')
                len++;
            }
            
            if( (count - 1) != 3 || count_num != 4)
            return 0;
            
            return 1;
        }
