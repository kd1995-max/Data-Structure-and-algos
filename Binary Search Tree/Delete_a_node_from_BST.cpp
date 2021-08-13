Node *getSuccessor(Node* root)
{
    root = root->right;
    while(root!=NULL && root->left != NULL)
    root = root->left;
    
    return root;
}
Node *deleteNode(Node *root,  int x)
{
    // your code goes here
    if(root == NULL) return root;
    else if(root->data > x)
    root->left = deleteNode(root->left,x);
    else if(root->data < x)
    root->right = deleteNode(root->right,x);
    else{
        if(root -> left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL)
        {
            Node *temp = root->left;
            delete(root);
            return temp;
        }
        else
        {
            Node *curr = getSuccessor(root);
            root->data = curr->data;
            root->right = deleteNode(root->right , curr->data);
        }
    }
    
    return root;
}
