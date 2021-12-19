struct Node* partition(struct Node* head, int x) {
    // code here
    Node *small = new Node(0);
    Node *large = new Node(0);
    
    Node *point_small = small, *point_large = large;
    
    Node *equals = new Node(0);
    Node *point_equals = equals;
    
    while(head)
    {
        if(x > head->data)
        {
            point_small->next = head;
            point_small = point_small->next;
        }
        else if(x < head->data)
        {
            point_large->next = head;
            point_large = point_large->next;
        }
        else if(x == head->data)
        {
            point_equals->next = head;
            point_equals = point_equals->next;
        
        }
        
        head = head->next;
    }
    
        point_large->next = NULL;
        if(equals->next)
        {
            point_small->next = equals->next;     
            point_equals->next = large->next;
        }
        else
        {
            point_small->next = large->next;
        }
    
    return small->next;
}
