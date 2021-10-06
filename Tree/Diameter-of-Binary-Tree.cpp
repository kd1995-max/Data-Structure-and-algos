int height(struct Node *root, int &res)
    {
        if(root == NULL)
        return 0;
        
        int lh = height(root->left,res);
        int rh = height(root->right,res);
        
        res = max(res , 1 + lh + rh);
        
        return 1 + max(lh , rh);
    }

    int diameter(struct Node* root) {
        // code here
        
        int res = 0;
        height(root, res);
        
        return res;
    }
};
