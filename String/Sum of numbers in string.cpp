 int findSum(string str)
    {
    	
    	// Your code here
    	int sum=0;
    	int size=str.size();
    	int ans=0;
    	
    	for(int i=0;i<size;i++)
    	{
    	    if(str[i]>='0' && str[i]<='9')
    	    {
    	        ans=ans*10+(str[i]-'0');
    	    }
    	    else
    	    {
    	        sum+=ans;
    	        ans=0;
    	    }
    	}
    	return sum+ans;
    	
    }
