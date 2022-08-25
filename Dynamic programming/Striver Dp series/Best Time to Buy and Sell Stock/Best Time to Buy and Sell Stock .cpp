int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxi = 0;
    int mini = prices[0];
    int n = prices.size();
 
    for(int i = 0; i < n; i++ )
    {
        int price = prices[i] - mini;
        maxi = max(maxi , price);
        mini = min(mini , prices[i]);
    }
    
    return maxi;
}
