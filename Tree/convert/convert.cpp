void convert(Node *head, TreeNode *&root)
{
    // Your code here
    queue<TreeNode *> q;
    
    root = new TreeNode(head->data);
    q.push(root);
    head = head->next;
    
    while(head)
    {
        TreeNode* parent = q.front();
        q.pop();
        
        TreeNode *leftNode = NULL, *rightNode = NULL;
        
        leftNode = new TreeNode(head->data);
        q.push(leftNode);
        head = head->next;
        
        if(head)
        {
            rightNode = new TreeNode(head->data) ;
            q.push(rightNode);
            head = head->next;
        }
        
        parent->left = leftNode;
        parent->right = rightNode;
    }
}
