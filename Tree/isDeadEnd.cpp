bool solve(Node* root, int mn , int mx )
{
    if(!root)    
    return false;
    
    if(mn == mx)
    return true;
    
    bool lh = solve(root->left , mn , root->data - 1);
    bool rh = solve(root->right , root->data + 1 , mx);
    
    return lh or rh;
}

bool isDeadEnd(Node *root)
{
    //Your code here
    
    return solve(root,1,INT_MAX);
}
