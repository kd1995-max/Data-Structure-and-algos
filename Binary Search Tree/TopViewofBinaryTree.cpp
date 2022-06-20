 vector<int> topView(Node *root)
    {
        //Your code here
        map<int,int> mp;
        
        queue<pair<Node*,int>> q;
        q.push({root,0});
        
        while(!q.empty())
        {
            Node* curr = q.front().first;
            int num = q.front().second;
            
            if(mp.find(num) == mp.end())
            mp[num] = curr->data;
            
            q.pop();
            
            if(curr->left)
            q.push({curr->left,num - 1});
            
            if(curr->right)
            q.push({curr->right,num + 1});
        }
        vector<int> vec;
        
        for(auto a : mp)
        {
            vec.push_back(a.second);
        }
        
        return vec;
    }
