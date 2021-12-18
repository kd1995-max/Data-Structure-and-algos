    string findSum(string str1, string str2) 
    {
        // Your code goes here
        if(str1.length() > str2.length())
    	swap(str1,str2);
    
    	string str = "";
    	
    	int n1 = str1.length();
    	int n2 = str2.length();
    	int diff = n2 - n1;
    	
    	int carry = 0;
    	
    	for(int i = n1 - 1; i >= 0; i--)
    	{
    		int sum = ((str1[i] - '0') + (str2[i + diff] - '0')) + carry;
    		str.push_back(sum%10 + '0');
    		carry = sum/10;
    	}
    	
    	for(int i = diff - 1; i >=0; i--)
    	{
    		int sum = (str2[i] - '0') + carry;
    		str.push_back(sum%10 + '0');
    		carry = sum/10;		
    	}
    	
    	if(carry)
    		str.push_back(carry + '0');
    		
    	reverse(str.begin(),str.end());
    	
    	int i = 0;
    	while(str[i] == '0')
    	{
    	    i++;
    	    
    	    if(str[i] != '0')
    	    break;
    	}
    
    	string final = "";
    	
    	if(i == str.length())
    	final.push_back('0');
    	
    	for(; i < str.length();i++)
    	{
    	  final.push_back(str[i])  ;
    	}
    	
    	return final;
    }
    
    string solve(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        
        string num[2] = {""};
        
        for(int i = 0; i < 2; i++)
        {
            int j = i;
          
            while(j < n)
            {
                num[i] += to_string(arr[j]);
             
                j += 2;
            }
        }
        
        return findSum(num[0],num[1]);
    }
