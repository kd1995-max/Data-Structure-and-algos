Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *newNode = NULL;
    Node *curr;

    
    while(head1 and head2)
    {
        if(head1->data < head2->data)
        {
            if(!newNode)
            {
                newNode = new Node(head1->data);   
                curr = newNode;
            }
            else
            {
                curr->next = new Node(head1->data);    
                curr = curr->next;    
            }
            
            
            head1 = head1->next;
        }
        else if(head1->data > head2->data)
        {
            if(!newNode)
            {
                 newNode = new Node(head2->data);    
                 curr = newNode;
            }
            else
            {
                curr->next = new Node(head2->data);    
                curr = curr->next;    
            }
            
            
            head2 = head2->next;
        }
        else
        {
            if(!newNode)
            {
                newNode = new Node(head2->data);    
                newNode->next = new Node(head1->data); 
                curr=newNode->next;
            }
            else
            {
                curr->next = new Node(head2->data);    
                curr = curr->next;
                
                curr->next = new Node(head1->data);  
                curr=curr->next;    
            }
            
            
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    
    while(head1)
    {
        curr->next = new Node(head1->data);
        
        curr = curr->next;
        
        head1=head1->next;
    }
    
    while(head2)
    {
        curr->next = new Node(head2->data);
        
        curr = curr->next;
        
        head2=head2->next;
    }
    
    return newNode;
}
