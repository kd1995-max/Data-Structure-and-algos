vector<int> find(int arr[], int n , int x )
{
    // code here
    int first = -1 , last = -1;
    //First Occurance
    int low = 0 , high = n - 1; 
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] < x)
        {
            low = mid  +  1;            
        }
        else if(arr[mid] > x)
        high = mid - 1;
        else
        {
            if(mid == 0 || arr[mid] != arr[mid - 1])
            {first = mid;break;}
            else
            high = mid - 1;
        }
 
    }
    
    //Last Occurance
    low = 0 , high = n - 1; 
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] < x)
        {
            low = mid  +  1;            
        }
        else if(arr[mid] > x)
        high = mid - 1;
        else
        {
            if(mid == n-1 || arr[mid + 1] != arr[mid])
            {last = mid;break;}
            else
            low = mid +  1;
        }
 
    }
    return {first,last};
}
