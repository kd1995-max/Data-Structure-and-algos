void PrintInLevel(Node *node, vector<vector<int>> &vec)
{

  if(node==NULL) return;
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

}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<vector<int>> vec;
   vector<int> res;
   if(root == NULL) return res;
   PrintInLevel(root,vec);
   for(int i = 0; i < vec.size(); i++)
   {
       res.push_back(vec[i][0]);
   }
   
   return res;
}
