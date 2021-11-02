int strstr(string s, string x)
{
     //Your code here
     int n = s.length();
     int m = x.length();
     
     for(int i = 0; i < n; i++)
     {
         int j;
         for( j = 0; j < m; j++)
         {
             if(s[i + j] != x[j])
             break;
         }
         
         if(j == m)
         return i;
     }
     
     
     return -1;
}
