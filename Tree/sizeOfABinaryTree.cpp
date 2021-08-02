void count(Node* head , int &k)
{
    if(head != NULL)
   {
       k++;
       count(head->left , k);
       count(head->right , k);
   }
}
int getSize(Node* node)
{
   // Your code here
   int k = 0;
   count(node,k);
   return k;
}
