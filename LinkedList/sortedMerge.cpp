Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *newNode = NULL;  //thikedaaar
    Node *temp = NULL; //Majdoor
    
    while(head1 && head2)
    {
        if(head1->data <= head2->data){
            
            if(newNode==NULL)//give contract to the thikedar
            {
                newNode = new Node(head1->data);
                temp = newNode; //assign workto majdoors
            }
            else//tast startedby majdoor
            {
                temp-> next = new Node(head1->data);
                temp = temp -> next;
            }
            head1 = head1->next;
        }
        else{
            if(newNode==NULL)
            {
                newNode = new Node(head2->data);
                temp = newNode;
            }
            else
            {
                temp->next = new Node(head2->data);
                temp = temp -> next;
            }
            head2 =head2->next;
        }
    }
    
    if(head1 && !head2)
    {
        while(head1)
        {
            temp-> next = new Node(head1->data);
            temp = temp -> next; 
            head1 = head1->next;
        }
    }
    else
    {
            while(head2)
            {
                temp->next = new Node(head2->data);
                temp = temp -> next;
                head2 = head2->next;
            }
    }
    
    return newNode;
}  
