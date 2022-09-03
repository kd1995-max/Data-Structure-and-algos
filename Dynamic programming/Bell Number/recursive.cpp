//Bell Numbers using Summation Of Stirling's Second kind
// N = [The n in Bn];
// sum = 0;

// B(N) = S(N,k) for k = 1 to N

// function S(n,k){
//     if n == 0 or k == 0 or k > n
//         return 0
//     else {
//         if k == 1 or n==k
//             return 1
//     }
//     else 
//         return k*S(n-1, k) + S(n-1, k-1)
// }
    int solve(int n, int k)
    {
        if(n == 0 or k == 0 or k > n)
            return 0;
        else 
        {
            if(k == 1 or n==k)
                return 1;
        }
       
        return k*solve(n-1, k) + solve(n-1, k-1);
    }
    int bellNumber(int n)
    {
       // Code Here
       int sum = 0;
       
       for(int k = 0; k <= n; k++)
       {
           sum += solve(n,k);
       }
       
       return sum;
    }
    
Using Summation Of Sterling's Second kind: Θ(N^2)
