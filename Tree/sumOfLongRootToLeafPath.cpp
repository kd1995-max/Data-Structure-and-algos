vector<int> height(Node* root )
    {
        if(!root)
        return {0,0};
        
        vector<int> lh = height(root->left);
        vector<int> rh = height(root->right);
        
        if(lh[0] > rh[0]) 
        return {lh[0] + 1, lh[1] + root->data};
        
        if(rh[0] > lh[0])
        return {rh[0] + 1, rh[1] + root->data};
        else
        return {rh[0] + 1, max(rh[1] , lh[1]) + root->data};
        
        
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        vector<int> res = height(root);
        
        return res[1];
    }
