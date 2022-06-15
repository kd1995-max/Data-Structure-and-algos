void solve(Node* root,int target,unordered_set<int> &s,int &f)
    {
        if(!root)
        return;
        
        solve(root->left,target,s,f);
        
        if(s.find(target - root->data) != s.end())
        {
           f=1;
           return;
        }
        else
        {
           s.insert(root->data);
        }
        
        solve(root->right,target, s,f);
    }
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
        int flag = 0;
        unordered_set<int> s;
        solve(root,target,s,flag);
        return flag;
    }
