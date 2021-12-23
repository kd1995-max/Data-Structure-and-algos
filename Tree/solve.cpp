bool solve(Node* node1, Node* node2)
{
    if(!node1 and !node2)    
    return true;
    
    if(!node1 || !node2)
    return false;
    
    return solve(node1->left,node2->right) and solve(node1->right,node2->left);
}

bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root == NULL)bool solve(Node* node1, Node* node2)
{
    if(!node1 and !node2)    
    return true;
    
    if(!node1 || !node2)
    return false;
    
    return solve(node1->left,node2->right) and solve(node1->right,node2->left);
}

bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root == NULL)
    return true;
    
    return solve(root->left,root->right);
}
    return true;
    
    return solve(root->left,root->right);
}
