string largestNumber(int n, int sum)
    {
        // Your code here
        if(9*n < sum)
        return "-1";
        
        string res = "";
        
        for(int i = 0; i < n; i++)
        {
            if(sum >= 9)
            {
                res = res + '9';
                sum -= 9;
            }
            else
            {
                if(i == n-1)    
                {
                    res = res + to_string(sum);
                }
                else
                {
                    
                    res =  res + to_string(sum);
                    i++;
                    
                    while(i < n)
                    {
                        
                        res = res + '0';
                        i++;
                        
                    }
                    
                    break;
                    
                }
            }
        }
        
        return res;
    }
