int jump(int nums[], int pos,int n) 
    {
	if(pos >= n - 1) return 0;        
	int minJumps = 1e9;  // initialising to max possible jumps + 1
	
	for(int j = 1; j <= nums[pos]; j++)  // explore all possible jump sizes from current position
		{
		    int jumps = jump(nums, pos + j,n);
		    minJumps = min(minJumps, 1 + jumps);
		}
	return minJumps;
}
    
    int minJumps(int arr[], int n){
        // Your code here
        if(n == 1)
        return 0;
        
        if(arr[0] == 0)
        return -1;
        
        int ans = jump(arr,0,n);
        
        if(ans == 1e9)
        return -1;
        
        else 
        return ans;
    }
