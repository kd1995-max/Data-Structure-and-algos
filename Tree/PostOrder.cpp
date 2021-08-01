void Post(Node *root,vector<int>&vec)
{
    if(root != NULL)
    {
        Post(root->left,vec);
        Post(root->right,vec);
        vec.push_back(root->data);
    }
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> vec;
  Post(root, vec);
  return vec;
}
