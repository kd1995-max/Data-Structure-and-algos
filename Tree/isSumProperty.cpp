int isSumProperty(Node *root)
    {
      if( root == NULL  || (!(root->left) && !(root->right)))
        return 1;
      
      int left_sum = 0, right_sum = 0;
      if(root->left)
        left_sum = root->left->data;
      if(root->right)
        right_sum = root->right->data;
     
      if( root->data == (left_sum+right_sum) && isSumProperty(root->left) && isSumProperty(root->right) )
              return 1;
      
    return 0;
    }
