int minValue(Node* root) {
    // Code here
    if(!root->left)
    return root->data;
    
    return minValue(root->left);
}
