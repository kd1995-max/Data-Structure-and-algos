int solve(Node *root,int &Max_Value)
{
    if(!root)
    return INT_MAX;
    
    if(!root->left and !root->right)
    return root->data;
    
    int lh = solve(root->left, Max_Value);
    int rh = solve(root->right, Max_Value);
    
    int Min_Value = min(lh,rh);
    
    Max_Value = max(Max_Value,root->data - Min_Value);
    
    return min(root->data, Min_Value);
}

int maxDiff(Node* root)
{
    // Your code here 
    int Max_Diff = INT_MIN;
    solve(root,Max_Diff);
    return Max_Diff;
}
