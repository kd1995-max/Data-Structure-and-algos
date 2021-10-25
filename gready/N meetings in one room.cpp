class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
   static bool myCmp(pair<int,int>p1,pair<int,int>p2){
      
       return p2.second>p1.second;
   }

    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>vec;
        
       for(int i=0;i<n;i++){
           pair<int,int>p;
           p.first= start[i];
           p.second=end[i];
           vec.push_back(p);
       }
        
        sort(vec.begin() , vec.end() , myCmp);
        
        int prev = 0;
        int res = 1;
        
        for(int curr = 1; curr < n; curr++)
        {
            if(vec[curr].first > vec[prev].second)
            {
                res++;
                prev = curr;
            }
        }
        
        return res;
    }
};
