int minFlips (string str)
{
    // your code here
    int c1 = 0 , c2 = 0;
    int n = str.length();
    for(int i = 0; i < n; i++)
    {
        
        if(i%2 == 0 and str[i] == '1') c1++;
        if(i&1 and str[i] == '0') c1++;
        if(i%2 == 0 and str[i] == '0') c2++;
        if(i&1 and str[i] == '1') c2++;
        
    }
    
    return min(c1,c2);
}
