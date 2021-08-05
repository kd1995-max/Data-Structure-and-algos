int isSumProperty(Node *root)
{
 //if root is NULL and only one node exist
 if(root == NULL || (root-> left == NULL && root->right == NULL) )
 return 1;
 
 queue<Node *> q;
 
 q.push(root);
 
 while(q.empty() == false)
 {
        int sum = 0;
         Node *curr = q.front();
         
         q.pop();
         if(curr->left != NULL)
         {
             sum += curr->left->data;
             q.push(curr->left);
         }
         if(curr->right != NULL)
         {
             sum += curr->right->data;
             q.push(curr->right);
         }
         
         if(sum != 0 && curr->data != sum)
         return 0;
         
 }
 
 return 1;
}
