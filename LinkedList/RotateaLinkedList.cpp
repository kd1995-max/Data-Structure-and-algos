Node* rotate(Node* head, int k)
    {
        //if there is only one Node or no Node
        if(head->next == NULL)
        return head;
        
        Node *curr = head;
        
        Node *newLast = NULL;
        Node *oldLast = NULL;
        Node *newHead = NULL;
        
        for(int i = 1; i < k; i++)
        {
            if(curr)
            curr = curr->next;
            else
            return head;
        }
        
        
        
        if(curr->next == NULL)
        {
            return head; //if curr becomes the last node this means the request had been mad is out of reach
        }
        else if(curr)
        {
            newLast = curr;
            newHead = curr->next;
            oldLast = newHead;
        }
        else
        {
            return head;
        }
        
        
        while(oldLast->next)
        {
            oldLast = oldLast -> next;
        }
        
        
        
        oldLast->next = head;
        newLast->next = NULL;
        
        
        
        return newHead;
    }
