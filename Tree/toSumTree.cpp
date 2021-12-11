int sum(Node *root)
    {
        if(!root)
        return 0;
        
        int a = sum(root->left);
        int b = sum(root->right);
        
        int x = root->data;
        
        root->data = a + b;
        return a + b + x;
    }
    
    void toSumTree(Node *root)
    {
        // Your code here
        sum(root);
    }
