void inorder(struct node *root)
{
   if(root)
   {
       inorder(root->left);
       cout<<root->data<<" ";
       inorder(root->right);
   }
}
 
void inorder_stack(node *root)
{
   stack<node *> s;
   node *curr=root;
 
   while(curr || !s.empty())
   {
       while(curr)
       {
           s.push(curr);
           curr=curr->left;
       }
       curr=s.top();
       s.pop();
       cout<<curr->data<<" ";
       curr=curr->right;
   }
}


void preorder(struct node *root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

//preorder traversal using stack data structure
void preorder_stack(struct node *root)
{
    stack<struct node *> s;
    struct node *temp;
    while(root || !s.empty())
    {
        while(root)
        {
            cout<<root->data<<" ";
            s.push(root);
            root=root->left;
        }
        temp=s.top();
        s.pop();
        root=temp->right;
    }
}

void postorder(struct node *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

//postorder traversal using stack data structure
void postorder_stack(struct node *root)
{
    stack<struct node *> s;
    struct node *temp;
    while(root || !s.empty())
    {
        while(root)
        {
            s.push(root);
            root=root->left;
        }
        temp=s.top();
        s.pop();
        if(temp->right==NULL)
        {
            cout<<temp->data<<" ";
        }
        else
        {
            s.push(temp);
            root=temp->right;
        }
    }
}
