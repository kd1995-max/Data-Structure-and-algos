    long long findMaxSum(vector<long long> &arr, long long n) {
        // code here
        
        long long prev = arr[0];
        long long prev2 = 0;
        long long curr_i;
        
        for(long long i = 1; i < n; i++)
        {
            
            long long pick = arr[i];
            
            if(i>1)
            pick += prev2;
            
            long long notPick = 0 + prev;
            
            curr_i = max(pick , notPick);
            
            prev2 = prev;
            prev = curr_i;
            
        }
        
        return prev;
    }

long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    vector<long long> leaveFirst , leaveLast;
    long long n = valueInHouse.size();
    
    if(n == 1)
        return valueInHouse[0];
    
    for(long long i = 0; i < n; i++)
    {
            if(i != 0)
                leaveFirst.push_back(valueInHouse[i]);
        
            if(i != n - 1)
                leaveLast.push_back(valueInHouse[i]);
    }
    
    return max(findMaxSum(leaveFirst , n -1) , findMaxSum(leaveLast , n -1));
}
