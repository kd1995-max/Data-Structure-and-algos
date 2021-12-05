void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
    int i=0,l=0,r=array.size()-1;
       
       while(i<=r)
       {
           if(array[i]<a)
           swap(array[i++],array[l++]);
           
           else if(array[i]>b)
           swap(array[i],array[r--]);
           
           else 
           i++;
       }
    }
