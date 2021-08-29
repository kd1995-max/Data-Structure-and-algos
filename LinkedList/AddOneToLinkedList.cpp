Node *reverse(Node *head)
    {
        Node *first = NULL;
        Node *second,*third;
        second=third=head;
        
        while(second)
        {
            third = second->next;
            second->next = first;
            first = second;
            second = third;
        }
        
        return first;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        int carry = 1;
        int ones = 0;
        
        head = reverse(head);
        
        Node *curr = head;
        while(curr)
        {
            int sum = curr->data + carry;
            carry = sum/10;
            ones = sum%10;
            curr->data = ones;
            
            if(!curr->next)
            break;
            
            curr= curr->next;
            
        }
        
        if(carry > 0)
        {
            curr->next = new Node(carry);
            
        }
        
        head = reverse(head);
        
        return head;
    }
