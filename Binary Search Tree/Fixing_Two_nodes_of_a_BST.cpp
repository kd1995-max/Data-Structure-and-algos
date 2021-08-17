class Solution {
  public:
    
    Node *prev=NULL;
    void returnTheDefaulter(Node *root, Node* &first, Node* &second)
    {
        if(root == NULL)
        return;
        
        returnTheDefaulter(root->left, first, second);
        
        if(prev != NULL && root->data < prev->data)
        {
            if(first == NULL)
            first = prev;
            
            second = root;
        }
        prev = root;
        returnTheDefaulter(root->right, first, second);
    }
    void correctBST( struct Node* root )
    {
        // add code here.
       Node *first = NULL, *second = NULL;
       returnTheDefaulter(root,first,second);
       swap(first->data,second->data);
       
    }
};
