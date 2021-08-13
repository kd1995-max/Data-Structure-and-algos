Node* insert(Node* root, int key)
{
    // Your code here
    Node *temp = new Node(key);
    Node *curr = root, *parent = NULL;
    while(curr != NULL){
        parent = curr;
        if(curr -> data > key )
        curr = curr->left;
        else if(curr->data < key)
        curr = curr->right;
        else
        return curr;
    }
    
    if(parent == NULL)
    return temp;
    else if(parent->data > key)
    parent->left = temp;
    else if(parent -> data < key)
    parent->right = temp;
    
    return root;
}
