class Solution {
public:
    string reorganizeString(string s) {
        string res = "";
        unordered_map<char,int> m;
        
        for(auto c: s)
		{
			m[c]++;

			if(m[c] > (s.size()+1)/2)
				return "";
		}
			
        priority_queue<pair<int,char>> pq;
		
		for(auto it = m.begin(); it != m.end(); it++)
			pq.push({it->second,it->first});

		while(pq.size() > 1)
		{
			auto p = pq.top();
			pq.pop();
			
			auto c = pq.top();
			pq.pop();

			res += p.second;
			res += c.second;

			if(p.first > 1)
				pq.push({p.first-1,p.second});
			if(c.first > 1)
				pq.push({c.first-1,c.second});
		}

		if(!pq.empty())
		{
			auto p = pq.top();
			pq.pop();

			res += p.second;

			if(p.first > 1)
				pq.push({p.first-1,p.second});
		}

        return res;
    }
};
