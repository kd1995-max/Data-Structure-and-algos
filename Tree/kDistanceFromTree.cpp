 void nodeAtGivenDistance(Node* root, vector<int>&vec, int k)
    {
      if(root == NULL) return;
        
        if(k == 0)
        {
            vec.push_back(root->data);
        }
        else
        {
            nodeAtGivenDistance(root->left,vec,k-1);
            nodeAtGivenDistance(root->right,vec,k-1);
        }
    }
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  vector<int> vec;
        nodeAtGivenDistance(root,vec,k);
        return vec;
}
