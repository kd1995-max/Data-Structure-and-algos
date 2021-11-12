void mergeSorting(Node **head)
    {
        Node *curr = *head;
        Node *first;
        Node *second;
        
        if(!curr or !curr->next)
        return;
        
        findMiddle(curr,&first,&second);
        
        mergeSorting(&first);
        mergeSorting(&second);
        
        *head = MergBoth(first,second);
    }
    
    Node *MergBoth(Node* first, Node* second)
    {
        Node *answer = NULL;
        
        if(!first)
        return second;
        else if(!second)
        return first;
        
        if(first->data <= second->data)
        {
            answer = first;
            answer->next = MergBoth(first->next, second);
        }
        else
        {
            answer = second;
            answer->next = MergBoth(first, second->next);
        }
        
        return answer;
    }
    
    void findMiddle(Node *curr, Node** first, Node** second)
    {
        Node *fast;
        Node *slow;
        slow = curr;
        
        fast = curr->next;
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }
        
        *first = curr;
        *second = slow->next;
        slow->next = NULL;
    }
    
    Node* mergeSort(Node* head) {
        // your code here
        mergeSorting(&head);
        return head;
    }
