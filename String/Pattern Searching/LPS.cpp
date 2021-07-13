void fillLPS(string str, int LPS[])
{

	int n = str.length() , len = 0;
	LPS[0] = 0;
	int i  =  1;
	while(i < n)
	{
	
		if(str[i] == str[len])
		{len++; str[i] = len; i++;}	
		else
		{
		
			if(len == 0)
			{
				LPS[i] = 0;
				i++;
			}
			else
			{
				len = LPS[len - 1];
			}
		}
	
	}

}
