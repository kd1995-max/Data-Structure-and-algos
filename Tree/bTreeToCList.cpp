Node* x=NULL;
   
   void bTreeToCListutil(Node* root,Node** head)
   {
       if(!root)
           return;
       
       bTreeToCListutil(root->left,head);
       
       if(!*head)
           *head=root;
           
       root->left=x;
       
       if(x)
           x->right=root;
           
       x=root;
       
       if(root->right)
           bTreeToCListutil(root->right,head);
   }
   
   //Function to convert binary tree into circular doubly linked list.
   Node * bTreeToCList(Node *root)
   {
       // your code here
       Node* head=NULL;
       bTreeToCListutil(root,&head);
       x->right=head;
       head->left=x;
       return head;
   }
