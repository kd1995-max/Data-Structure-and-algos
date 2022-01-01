    typedef long long ll;


    ll merge(ll arr[], ll left , ll mid, ll right)
    {
        ll n1 = mid - left + 1;
        ll n2 = right - mid;
        
        ll left_arr[n1] , right_arr[n2];
        
        for(ll i = 0; i < n1; i++)
            left_arr[i] = arr[i + left];
        
        for(ll i = 0; i < n2; i++)
            right_arr[i] = arr[mid + i + 1];
            
        ll res = 0, i = 0, j = 0, k = left;
        
        while(i < n1 && j < n2)
        {
            if(left_arr[i] <= right_arr[j])
            arr[k++] = left_arr[i++];
            else
            {
                arr[k++] = right_arr[j++];
                res = res + (n1 - i);
            }
        }
        
        while(i<n1)
            arr[k++]=left_arr[i++];
        while(j<n2)
            arr[k++]=right_arr[j++];
            
        return res;
        
    }
    
    ll mergeSort(ll arr[], ll left, ll right)
    {
        ll res = 0;
        
        if(left < right)
        {
            ll mid = (left + right)/2;
            res += mergeSort(arr,left,mid);
            res += mergeSort(arr,mid + 1 , right);
            
            res+= merge(arr,left,mid,right);
        }
        
        return res;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergeSort(arr,0,N-1);
    }
