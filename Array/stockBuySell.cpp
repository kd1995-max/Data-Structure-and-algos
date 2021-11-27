vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>>ans;
        if(n==1)
        return ans;
        int i=0,j=0;
        while(i<n-1)
        {
            vector<int>v;
            while(i<n-1 && A[i+1]<=A[i])
            i++;
            if(i==n-1)
            break;
            int buy=i;
            v.push_back(buy);
            i++;
            
            while(i<n && A[i]>A[i-1])
            i++;
            int sell=i-1;
            v.push_back(sell);
            
            ans.push_back(v);
        }
        return ans;
    }
