class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    
    void top(Node *root ,map<int,int> &m)
    {
        queue<pair<Node*,int>>q;
        q.push({root, 0});
        while(q.empty() == false){
            
            auto p = q.front();
            Node *curr = p.first;
            q.pop();
            
            int hd = p.second;
            
            if(m.find(hd) == m.end())
            m[hd] = curr->data;
            
            if(curr->left!=NULL)
            q.push({curr->left,hd-1});
            if(curr->right!=NULL)
            q.push({curr->right,hd+1});
        }
    }
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> vec;
        map<int,int> m;
        top(root , m);
        
        for(auto a : m)
        vec.push_back(a.second);
        
        return vec;
    }

};
