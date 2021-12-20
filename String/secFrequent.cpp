string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int> m;
        int max_element = INT_MIN;
        
        for(int i = 0; i < n; i++)
        {
            
            m[arr[i]]++;
            max_element = max(max_element, m[arr[i]]);
        
        }
        
        pair<string , int >  ans;
        ans.second = INT_MIN;
        
        for(auto a : m)
        {
            if(a.second == max_element)
            continue;
            
            if(ans.second < a.second)
            {
                ans = {a.first,a.second};
            }
        }
        
        return ans.first;
    }
