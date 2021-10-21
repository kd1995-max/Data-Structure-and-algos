string rearrangeString(string str)
    {
        //code here
        int n = str.size();
        unordered_map<char,int> m;
        
        for(auto a : str)
        {
            m[a]++;
            
            if(m[a] > n/2)
            return "-1";
        }
        
        priority_queue<pair<int,char>> pq;
        for(auto a : m)
        {
            pq.push({a.second,a.first});
        }
        
        string res = "";
        
        while(pq.size() >= 2)
        {
            pair<int,char> a = pq.top();
            pq.pop();
            
            pair<int,char> b = pq.top();
            pq.pop();
            
            res += a.second;
            res += b.second;
            
            if(a.first - 1 > 0)
            pq.push({a.first - 1 , a.second});
            
            if(b.first - 1 > 0)
            pq.push({b.first - 1 , b.second});
        }
        while(!pq.empty())
		{
			res += pq.top().second;
			pq.pop();
		}
        return res;
    }
