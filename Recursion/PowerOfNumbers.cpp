class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
        if(R == 0)
        return 1;
        
        return fmod((N * power(N,R-1)) , 1e9 + 7);
    }

};
