void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       if(!head || head->next == NULL)
       return ;
       
       Node *oddFetchEnd = head;
       
       Node *odd = NULL;
       Node *even = head -> next;
       
       while(head and head->next)
       {
           
           odd = head;
           head = head->next;
           
           odd->next = odd->next->next;
           
       }
       
      while(oddFetchEnd->next)
      {
          oddFetchEnd=oddFetchEnd->next;
      }
      
      oddFetchEnd->next = even;
      
    }
