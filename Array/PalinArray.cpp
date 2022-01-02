int PalinArray(int a[], int n)
{  //add code here.
  for(int i=0; i<n; i++)
  {
      int temp = a[i];
      int digit;
      int rev = 0;
      // code to reverse number and then check it palindrome or not
       while(temp>0){
           digit = temp%10;
           rev = (rev*10)+digit;
           temp = temp/10;
       }
       // checking reverse number are equal to arr[i] number
       if(rev != a[i])
           return 0;
      }
      return 1;
}
