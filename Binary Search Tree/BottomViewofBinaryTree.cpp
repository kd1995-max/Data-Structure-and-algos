
class Solution {
  public:
    void bottom(Node* root, map<int, int>&m)
    {
        queue<pair<Node*,int>>q;
        q.push({root, 0});
        while(q.empty() == false){
            
            auto p = q.front();
            Node *curr = p.first;
            q.pop();
            
            int hd = p.second;
            
           
            m[hd] = curr->data;
    
            if(curr->left!=NULL)
            q.push({curr->left,hd-1});
            if(curr->right!=NULL)
            q.push({curr->right,hd+1});
        }
    }
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> vec;
        map<int,int> m;
        bottom(root , m);
        
        for(auto a : m)
        vec.push_back(a.second);
        
        return vec;
    }
};
