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
