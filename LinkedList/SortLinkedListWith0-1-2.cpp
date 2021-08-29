Node* segregate(Node *head) {
        
        // Add code here
        Node *zero = NULL;
        Node *one = NULL;
        Node *two = NULL;
        Node *temp1,*temp2,*temp3;
        
        while(head)
        {
            if(head->data == 0)
            {
                if(zero == NULL)
                {
                    zero = new Node(0);
                    temp1 = zero;
                }
                else{
                    temp1->next = new Node(0);
                    temp1 = temp1->next;
                }
            }
            else if(head->data == 1)
            {
                if(one == NULL)
                {
                    one = new Node(1);
                    temp2 = one;
                }
                else{
                    temp2->next = new Node(1);
                    temp2 = temp2->next;
                }
            }
            else if(head->data == 2)
            {
                if(two == NULL)
                {
                    two = new Node(2);
                    temp3 = two;
                }
                else{
                    temp3->next = new Node(2);
                    temp3 = temp3->next;
                }
            }
            head = head->next;
        }
        
        if(zero && one && two)
        {
            temp1->next = one;
            temp2->next = two;
        }
        else if(zero && two)
        {
            temp1->next = two;
        }
        else if(zero && one)
        {
            temp1->next = one;
        }
        else if(one && two)
        {
            one->next = two;
            return one;
        }
        else if(zero && !one && !two)
        return zero;
        else if(!zero && one && !two)
        return one;
        else if(!zero && !one && two)
        return two;
        
        
        return zero;
    }
