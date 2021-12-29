    void solve(Node* root,int &idx, int k, int &ans)
    {
        
        if(!root)
        return;
        
        solve(root->right,idx,k,ans);
        
        idx++;       
        if(idx == k)
        {
            ans=root->data;
            return;
        }
 
 
        solve(root->left,idx,k,ans);
    }
    
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int idx = 0;
        int ans = -1;
        
        solve(root,idx,K,ans);
        
        return ans;
    }
