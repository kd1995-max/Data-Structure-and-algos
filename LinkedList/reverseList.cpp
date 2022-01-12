struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *first, *second, *third;
        
        first =  NULL;
        second = third = head;
        
        third = head;
        
        while(second)
        {
                third = second->next;
                second->next = first;
                first = second;
                second = third;
        }
        
        return first;
    }
