    int solve(Node* root, int &maxi)
    {
        if(!root)    
        return 0;
        
        int left = max(0 , solve(root->left,maxi));
        int right = max(0 , solve(root->right,maxi));
        
        maxi = max(maxi , (root->data) + left + right);
        
        return (root->data) + max(left , right);
    }
    
    int findMaxSum(Node* root)
    {
        // Your code goes here
        int maxi = INT_MIN;
        
        solve(root,maxi);
        
        return maxi;
    }
