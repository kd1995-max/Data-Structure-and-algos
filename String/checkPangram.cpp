bool checkPangram (string &str) {
        // your code here
        int count_small[26] = {0};
        int count_capital[26] = {0};
        
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] >= 65 and str[i] <= 90)
                count_small[str[i] - 65]++;
            else if(str[i] >= 97 and str[i] <= 122)
                count_capital[str[i] - 97]++;
        }
        
        for(int i = 0; i < 26; i++)
        {
            count_small[i] += count_capital[i];
            if(count_small[i] == 0)
                return false;
        }        
        return true;
    }
