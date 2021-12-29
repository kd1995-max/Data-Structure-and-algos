void fill(Node* root,vector<int> &vec)
   {
        if(!root)    
        return;
        
        fill(root->left,vec);
        
        vec.push_back(root->data);
        
        fill(root->right,vec);
   }
   
   void fill_inorder(Node* root,vector<int> vec,int &idx)
   {
       if(!root)
       return;
       
       fill_inorder(root->left,vec,idx);
       root->data = vec[idx++];
       fill_inorder(root->right,vec,idx);
   }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int> vec;
        fill(root,vec);
        
        sort(vec.begin(),vec.end());
        
        int idx=0;
        fill_inorder(root,vec,idx);
        
        return root;
    }
