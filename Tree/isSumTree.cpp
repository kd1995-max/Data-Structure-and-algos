int check(Node* root,bool &flag)
    {
        if(!root)
        return 0;
        
        if(!root->left && !root->right)
        return root->data;
        
        int a = check(root->left,flag);
        int b = check(root->right,flag);
        
        if((a+b) != root->data)
        flag = false;
        
        return a + b + root->data;
    }
    
    bool isSumTree(Node* root)
    {
         // Your code here
         bool flag = true;
         check(root,flag);
         
         return flag;
    }
