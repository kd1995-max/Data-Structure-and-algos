  int ret = 0;
    int sumOfDigits(int n)
    {
        //Your code here
        if(n == 0) return ret;
    ret = n%10 + ret;
    return sumOfDigits(n/10);
    }
