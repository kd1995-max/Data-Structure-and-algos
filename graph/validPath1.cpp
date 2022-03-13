class Solution {
public:
    
    bool BFS(unordered_map<int,vector<int>> um, int source,int destination) 
    {
        queue<int> q;
        
        vector<bool> visited(um.size() + 1, false);
        q.push(source);
        
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            
            if(u == destination)
                return true;
            
            for(auto v : um[u])
            {
                if(visited[v] == false)
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        
        return false;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> um;
        
        if(edges.size() == 0)
            return true;
        
        for(auto it : edges)
        {
            int first = it[0];
            int second = it[1];
            
            um[first].push_back(second);
            um[second].push_back(first);
        }
        
            
        
        return BFS(um,source,destination);
    }
};
