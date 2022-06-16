 int prevv = INT_MIN;
    bool isBST_(Node* root)
    {
        if(root == NULL)
        return true;
        if(isBST(root->left) == false) return false;
        if(root->data <= prevv) return false;
        
        prevv = root->data;
        return isBST_(root->right);
    }
    
    bool isBST(Node* root) 
    {
        // You(r code here
        return isBST_(root);
    }

// method 2
bool solve(Node* root,Node* min = NULL,Node* max = NULL)
    {
        if(!root)    
        return true;
        else if(min and min->data >= root->data)
        return false;
        else if(max and max->data <= root->data)
        return false;
        
        bool left = solve(root->left,min,root);
        bool right = solve(root->right,root,max);
        
        return left and right;
    }
    
    bool isBST(Node* root) 
    {
        // Your code here
        return solve(root,NULL,NULL);
    }
