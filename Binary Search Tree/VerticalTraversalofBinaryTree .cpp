class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    
    void vertical(Node *root, map<int,vector<int>>&m)
    {
        queue< pair<Node *, int> > q;
        q.push({root,0});
        
        while(q.empty() == false)
        {
            auto p = q.front();
            Node *curr = p.first;
            q.pop();
            
            int hd = p.second;
            m[hd].push_back(curr->data);
            
            if(curr->left != NULL)
            q.push({curr->left , hd - 1});
            if(curr->right != NULL)
            q.push({curr->right , hd + 1});
            
        }
    }
    
    
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int> vec;
        map<int,vector<int>> m;
        vertical(root,m);
        
        for(auto a : m)
        {
            vector<int> temp = a.second;
            for(auto v : temp)
            {vec.push_back(v);}
        }
        
        return vec;
    }
};
