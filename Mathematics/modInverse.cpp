int modInverse(int a, int m)
    {
        //Your code here
        int mod = m;
        int res = -1;
        while(m)
        {
            if((a*m)%mod == 1)
            {
                res = m;
                break;
            }
            m--;
        }
        
        return res;
    }
