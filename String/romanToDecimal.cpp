int solve(char c)
    {
        
    	if(c == 'I')      return 1;
    	else if(c == 'V') return 5;
    	else if(c == 'X') return 10;
    	else if(c == 'L') return 50;
    	else if(c == 'C') return 100;
    	else if(c == 'D') return 500;
    	else if(c == 'M') return 1000;
    }
    
    int romanToDecimal(string &str)
    {

    	int len = str.length(),num,sum = 0;
    	
    	for(int i = 0; i < len;)
    	{
    		if(i == (len - 1) || solve(str[i]) >= solve(str[i + 1]))
    		{
    			num = solve(str[i]);
    			i++;
    		}
    		else
    		{
    			num = solve(str[i + 1]) - solve(str[i]);
    			i += 2;
    		}
    		
    		sum += num;
    	}
    	
    	return sum;
    }
