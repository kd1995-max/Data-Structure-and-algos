class Solution
{
    public:
    Node *zigZag(Node* head)
    {
     // your code goes here
     if(!head || !head->next)
     return head;
     
     Node *node = head;
     bool flag = true;
     
     while(node->next)
     {
         if(flag)
         {
            if(node->data > node->next->data)    
            {
                swap(node->data,node->next->data);
            }
            
            flag = !flag;
         }
         else
         {
              if(node->data < node->next->data)    
                {
                    swap(node->data,node->next->data);
                }
                
                flag = !flag;
         }
         
         node = node->next;
     }
     
     return head;
    }
};
