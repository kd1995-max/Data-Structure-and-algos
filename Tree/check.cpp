int checkLevel(Node *root, bool& flag)
    {
        
        if(!root)
        return 0;
        
        int lh = checkLevel(root->left,flag);
        int rh = checkLevel(root->right,flag);
        
        if( lh and rh and lh!=rh )
        flag = false;
        
        return max(lh,rh) + 1;
        
    }
    
    bool check(Node *root)
    {
        
        //Your code here
        bool flag = true;
       
        checkLevel(root,flag);
        
        return flag;
        
    }
