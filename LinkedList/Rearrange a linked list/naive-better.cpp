void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       if(!head || head->next == NULL)
       return ;
       
       Node *odd = NULL;
       Node *even = head -> next;
       
       int count = 0;
       //by observation it is seen that when total 
       //number of nodes turn out to be
       //even then head pointer is pointing to the odd part
       //otherwise it will be pointing to even part
       
       while(head->next)
       {
           count++;
           
           odd = head;
           head = head->next;
           
           odd->next = odd->next->next;
           
       }

      
      if(count%2 != 0)
      {
          odd->next = even;
          return;
      }
      
        head->next = even;
      
    }
