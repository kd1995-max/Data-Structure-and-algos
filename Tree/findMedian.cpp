int val=0;
int fetchTheElement(Node *root,int num,int &i)
{
     if(!root)
     return 0;
     
     fetchTheElement(root->left,num,i);
     
     i++;
     if(i == num)
     val = root->data;
     
     fetchTheElement(root->right,num,i);
}

int count(Node *root)
{
    if(!root)    
    return 0;
    
    return 1 + count(root->left) + count(root->right);
}

float findMedian(struct Node *root)
{
      //Code here
      int i = 0;
      int N = count(root);
      
      if(N%2 == 0)
      {
          fetchTheElement(root,N/2,i);
          int a = val;
          i=0;
          fetchTheElement(root,N/2 + 1,i);
          int b = val;
          
          return (a + b)/2.0;
      }
      else
      {
          fetchTheElement(root,(N + 1)/2,i);
          int a = val;
          
          
          return a;
      }
}
