int ind = 0;

Node* construct(int pre[], int size, int mn, int mx) {
    
    if(ind<size && pre[ind]>=mn && pre[ind]<=mx) 
    {
        Node *node = newNode(pre[ind++]);
        node->left = construct(pre, size, mn, node->data);
        node->right = construct(pre, size, node->data, mx);
        return node;
    }
    
    return NULL;
}

Node* post_order(int pre[], int size)
{
    ind = 0;
    Node *root = construct(pre, size, INT_MIN, INT_MAX);
    return root;
}
