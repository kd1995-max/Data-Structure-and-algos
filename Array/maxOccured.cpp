int maxOccured(int L[], int R[], int n, int maxx)

    {
       int arr[maxx+1] = {0};
       
       
       for(int i=0;i<n;i++)
       {
           arr[L[i]]++;
           arr[R[i] + 1]--;
       }
       
       for(int i=1;i<maxx+1;i++)
       {
           arr[i] = arr[i] + arr[i-1];
       }
       
       int res = INT_MIN;
       int index;
       
       for(int i=0;i<maxx+1;i++)
       {
           if(arr[i]>res)
           {
               res = arr[i];
               index = i;
           }
       }
       
       return index;

    }
