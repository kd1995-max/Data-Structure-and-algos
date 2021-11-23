void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
        Node *odd = head;
        Node* even = head->next;
        Node* evenStart = even;
        
        while(odd->next and even->next)
        {
        	odd->next = even->next;
        	odd = odd->next;
        	
        	even->next = odd->next;
        	even = even -> next;
        }
        
        odd->next = evenStart;
        
    }
