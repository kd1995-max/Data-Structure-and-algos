Node* detectAndRemoveLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *slow =head,*fast=head;
        
        while(fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow==fast)
            break;
        }
        
        if(slow != fast)
        return NULL;
        
        if(slow == head)
        {
            while(fast->next != slow)
            fast = fast->next;
            
            return fast;
        }
        else if(slow == fast)
        {
            slow = head;
            while(fast->next != slow->next)
            {
                fast = fast->next;
                slow = slow->next;
            }
            
            return fast;
        }
        
    }
