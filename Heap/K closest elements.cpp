    bool operator()(pair<int, int> & p1, pair<int, int> & p2)
    {

        if(p1.first==p2.first)
        {
            return p1.second<p2.second;
        }
        return p1.first > p2.first;
    }
};

class Solution{   
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) 
    {
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
                continue;
                
            v.push_back({abs(arr[i]-x),arr[i]});
            
        }
        
        priority_queue<pair<int,int>, vector<pair<int, int>>, CompareHeight> pq;
        int i=0;
        while(i<v.size())
        {
            pq.push(v[i]);
            i++;
        }
        vector<int>res;
        while(k--)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
