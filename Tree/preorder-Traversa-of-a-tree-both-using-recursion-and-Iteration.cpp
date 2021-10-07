vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> vec;
  stack<Node *> s;
  s.push(root);
  
  while(!s.empty())
  {
      Node *curr = s.top();
      s.pop();
      
      vec.push_back(curr->data);
      
      //right is positioned first because we wanted it to be accessed first  
      if(curr->right != NULL) 
      s.push(curr->right);   
      
      if(curr->left != NULL) 
      s.push(curr->left);
      

  }
  
  return vec;
}
