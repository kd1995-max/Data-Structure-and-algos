 Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        Node* dummy = new Node(-1);
        
        Node* prev = dummy;
        
        Node* curr = head;
        
        dummy->next = head;
        
        while(curr and curr->next)
        {
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next = curr;
            curr = curr->next;
            prev = prev->next->next;
        }
        
        return dummy->next;
    }
