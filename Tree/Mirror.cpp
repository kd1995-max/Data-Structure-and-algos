void mirror(Node* root) {
        // code here
    if(!root)
    return ;
    
    mirror(root->left);
    mirror(root->right);
    swap(root->left,root->right);
    }
