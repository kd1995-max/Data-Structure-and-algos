  struct Node *reverse (struct Node *head, int k)
    { 
        // Complete this method
        if (!head)
        return NULL;
        
        Node *first,*second,*third;
        first = NULL;
        second=third=head;
        int count = 0;
        while(second && count < k)
        {
            third = second->next;
            second->next = first;
            first = second;
            second = third;
            count++;
        }
        
        if(third)
        head->next = reverse(third,k);
        
        return first;
    }
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        head = reverse(head,2);
        return head;
    }
