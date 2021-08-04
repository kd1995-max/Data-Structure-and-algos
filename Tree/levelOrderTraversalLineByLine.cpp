vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  vector<vector<int>> vec;
  if(node==NULL)return vec;
  queue<Node *> q;
  q.push(node);
  q.push(NULL);
  vector<int> temp;
  while(q.size() > 1)
  {
      
      Node *curr = q.front();
      q.pop();
      
      if(curr == NULL)
      {
          vec.push_back(temp);
          temp.clear();
          q.push(NULL);
          continue;
      }
      
      temp.push_back(curr->data);
      if(curr->left != NULL) q.push(curr->left);
      if(curr->right != NULL) q.push(curr->right);
  }
   vec.push_back(temp);
   
  return vec;
}
