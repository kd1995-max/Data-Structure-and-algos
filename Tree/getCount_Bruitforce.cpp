void solve(Node *root,unordered_set<int> &count,int l , int r)
{
    if(!root)
    return;
    
    solve(root->left,count,l,r);
    
    if(root->data >= l and root->data <= r)
    count.insert(root->data);
    
    solve(root->right,count,l,r);
    
    
}
int getCount(Node *root, int l, int h)
{
  // your code goes here   
  unordered_set<int> count;
  
  solve(root,count,l,h);
  
  return count.size();
}
