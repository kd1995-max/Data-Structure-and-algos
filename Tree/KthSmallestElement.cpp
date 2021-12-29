void solve(Node* root,int &idx, int k, int &ans)
    {
        
        if(!root)
        return;
        
        solve(root->left,idx,k,ans);
        
        idx++;       
        if(idx == k)
        {
            ans=root->data;
            return;
        }
 
 
        
        solve(root->right,idx,k,ans);
        
    }

    int KthSmallestElement(Node *root, int K) {
        // add code here.
        int idx = 0;
        int ans = -1;
        
        solve(root,idx,K,ans);
        
        return ans;
    }
