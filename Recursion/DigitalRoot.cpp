
class Solution{
  public:
    //Complete this function
    int sum = 0;
    int digitalRoot(int n)
    {
        //Your code here
        if(n == 0 && sum >= 10)
        {
            n = sum;
            sum = 0;
        }
        if(n == 0){
            return sum;
        }
        sum += n%10;
        
        return digitalRoot(n/10);
    }
};
