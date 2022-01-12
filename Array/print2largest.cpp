int print2largest(int arr[], int n)
    {
    	int max1=-1;
    	int max2=-1;
    	
    	for(int i=0;i<n;i++)
    	{
    	   int temp=max1;
    	   
    	   if(arr[i]>max1)
    	   {  
    	       max1=arr[i];
    	       max2=temp;
    	   }
    	   
    	   else if(arr[i]>max2)
    	   {
    	      if(arr[i]!=max1)
    	      {
    	          max2=arr[i];
    	      }
    	   }
    	   
    	}
    	return max2;
    }
