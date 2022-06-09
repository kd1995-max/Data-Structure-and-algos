vector<int> computeLPSArray(string s)
{
    int n = s.length();
    vector<int> LPS(n);
 
    int len = 0;
    LPS[0] = 0; 
    int i = 1;
    while (i < n)
    {
        if (s[i] == s[len])
        {
            len++;
            LPS[i] = len;
            i++;
        }
        else
        {
            if (len == 0)
            {
                LPS[i] = 0;
                i++;
            }
            else 
            {
               len = LPS[len-1];
            }
        }
    }
    return LPS;
}
    int minChar(string s){
        //Write your code here
        string rs = s;
        reverse(rs.begin(), rs.end());
        string c = s + "$" + rs;
        vector<int> LPS = computeLPSArray(c);
        return (s.length() - LPS.back());
    }
