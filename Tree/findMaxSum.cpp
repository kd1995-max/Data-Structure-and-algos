int solve(Node* root, int &maxi)
    {
        if(!root)
        return 0;
        
        int parent = root->data;
        int left = max(0 , solve(root->left , maxi));
        int right = max(0 , solve(root->right , maxi));
        
        maxi = max(maxi , left + right + parent);
        
        return max(left, right) + parent;
    }
    
    int findMaxSum(Node* root)
    {
        int maxm = INT_MIN;
        
         solve(root,maxm);
        
        return maxm;
    }
