//starting with 1
int josephus__(int n, int k)
{
   //Your code here
   if(n == 1)
   return 0;
   
   int x = josephus__(n - 1, k);
   int y = (x + k) % n;
   
   return y;
}

int josephus(int n, int k)
{
   //Your code here
   return josephus__(n,k) + 1;
}
