void Pre(Node* root, vector<int> &vec)
{
if(root != NULL)
  {
      vec.push_back(root->data);
      Pre(root->left,vec);
      Pre(root->right,vec);
  }
}



vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> vec;
  Pre(root,vec);
  return vec;
}
