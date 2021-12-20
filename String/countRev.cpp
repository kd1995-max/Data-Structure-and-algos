int countRev (string s)
{
    // your code here
    int cnt = 0;
    int res = 0;
    
    for(auto a : s)
    {
        if(a == '{')
        {
            cnt++;
        }
        else
        {
            if(cnt == 0)
            {
                res++;
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
    }
    
    if(cnt%2) 
    return -1;
    
    res += cnt/2;
    
    return res;
}
