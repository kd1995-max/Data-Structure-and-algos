int primeDigits(int n)
    {
        //code here
        int rem;
        int num;
        string res = "";
        while(n)
        {
            rem = n % 4;
            
            if(rem == 1)
            res += '2';
            else if(rem == 2)
            res += '3';
            else if(rem == 3)
            res += '5';
            else if(rem == 0)
            res += '7';
            
            if(n%4 == 0)
            n--;
            
            n = n/4;
        }
        
        reverse(res.begin(),res.end());
        
        return stoi(res);
    }
